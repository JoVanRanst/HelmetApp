#include <QMessageBox>

#include "animationcreation.h"
#include "ui_animationcreation.h"

AnimationCreation::AnimationCreation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnimationCreation)
{
    ui->setupUi(this);
    matrix = new LedMatrix::LedMatrix_main();
    ui->widget->setLayout(matrix);

    PageNmbr = 0;
    timer = new QTimer;
    timer->setSingleShot(true);
    connect(timer, SIGNAL(timeout()), this, SLOT(matrixPageRun()));

    connect(ui->button_prev,    SIGNAL(pressed()), this, SLOT(matrixPagePrev()));
    connect(ui->button_next,    SIGNAL(pressed()), this, SLOT(matrixPageNext()));
    connect(ui->button_save,    SIGNAL(pressed()), this, SLOT(matrixPageSave()));
    connect(ui->button_add,     SIGNAL(pressed()), this, SLOT(matrixPageAdd()));
    connect(ui->button_remove,  SIGNAL(pressed()), this, SLOT(matrixPageRemove()));
    connect(ui->button_run,     SIGNAL(pressed()), this, SLOT(matrixPageRun()));
    connect(ui->button_clear,   SIGNAL(pressed()), this, SLOT(matrixClear()));
    connect(ui->button_saveAnim,SIGNAL(pressed()), this, SLOT(exit()));
}

void AnimationCreation::UpdatePageCounter()
{
    unsigned char total = 0;
    if(!Pages.empty()) {
        total = Pages.size();
        ui->label_index->setText(QString::number(PageNmbr) + "/" + QString::number(total));
    } else {
        ui->label_index->setText("#/#");
        PageNmbr = 0;
    }
}

void AnimationCreation::ScrollPage(bool NextPage)
{
    if(Pages.empty()) {
        PageNmbr = 0;
        return;
    }

    if(NextPage) {
        PageNmbr++;
        if(PageNmbr > Pages.size()) {
            PageNmbr = 1;
        }
    } else {
        PageNmbr--;
        if(PageNmbr == 0) {
            PageNmbr = Pages.size();
        }
    }

    std::vector<LedMatrix::Page>::iterator it = Pages.begin();
    if(PageNmbr <= Pages.size() && PageNmbr != 0) {
        matrix->Set(&(*(it+(PageNmbr-1))));
    } else {
        /// Catch empty list or reset to start
        if(!Pages.empty()) {
            PageNmbr = 1;
        } else {
            PageNmbr = 0;
        }
    }
    UpdatePageCounter();
}

void AnimationCreation::matrixPagePrev()
{
    if(!Pages.empty())
        ScrollPage(false);
    UpdatePageCounter();
}

void AnimationCreation::matrixPageNext()
{
    if(!Pages.empty())
        ScrollPage(true);
    UpdatePageCounter();
}

void AnimationCreation::matrixPageSave()
{
    std::vector<LedMatrix::Page>::iterator it = Pages.begin();
    if(PageNmbr <= Pages.size() && PageNmbr != 0) {
        matrix->Get(&(*(it+(PageNmbr-1))));
        UpdatePageCounter();
    } else {
        /// Display error message
    }
}

void AnimationCreation::matrixPageAdd()
{
    LedMatrix::Page Buffer;
    std::vector<LedMatrix::Page>::iterator it = Pages.begin();
    matrix->Get(&Buffer);

    if(Pages.empty()) {
        Pages.push_back(Buffer);
        PageNmbr = 1;
    } else if(PageNmbr < Pages.size()) {
        Pages.insert(it+(PageNmbr-1), Buffer);
    } else {
        Pages.push_back(Buffer);
        PageNmbr = Pages.size();
    }
    UpdatePageCounter();
}

void AnimationCreation::matrixPageRemove()
{
    std::vector<LedMatrix::Page>::iterator it = Pages.begin();
    if(PageNmbr <= Pages.size() && PageNmbr != 0){
        Pages.erase(it+PageNmbr-1);

        if(Pages.empty()) {
            PageNmbr = 0;
        } else if(PageNmbr > Pages.size()) {
            PageNmbr = Pages.size();
        } else {
            PageNmbr >= 1? PageNmbr--: PageNmbr = 1;
        }
        matrixPagePrev();
    } else {
        /// Already empty
    }
    UpdatePageCounter();
}

void AnimationCreation::matrixPageRun()
{
    static bool Started = false;

    if(!Started) {
        Started = true;
        PageNmbr = 0;
        matrixPagePrev();
    } else if(PageNmbr<Pages.size()) {
        matrixPageNext();
    } else {
        Started = false;
        return;
    }

    timer->start(ui->spinbox_period->value()*1000);
}

void AnimationCreation::matrixClear()
{
    if(QMessageBox::warning(this,
                           "Are you sure?",
                           "You are about to clear all the led's in the matrix, are you sure about this?",
                           QMessageBox::Ok,
                           QMessageBox::Cancel) == QMessageBox::Ok)
    {
        matrix->Clear();
    } else {
        /// Action canceled
    }
}

void AnimationCreation::exit()
{
    if(!Pages.empty()) {
        /// Save functionality
    }
    //this->hide();
    emit exitMenu();
}

AnimationCreation::~AnimationCreation()
{
    delete ui;
}
