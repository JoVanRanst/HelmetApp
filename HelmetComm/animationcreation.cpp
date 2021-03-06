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

    connect(matrix,             SIGNAL(AnimationNmbrChanged(int)), this, SLOT(UpdatenavSlider(int)));
    connect(ui->navSlider,      SIGNAL(valueChanged(int)), this, SLOT(matrixPageSlider(int)));
    connect(ui->button_prev,    SIGNAL(pressed()), this, SLOT(matrixPagePrev()));
    connect(ui->button_next,    SIGNAL(pressed()), this, SLOT(matrixPageNext()));
    connect(ui->button_save,    SIGNAL(pressed()), this, SLOT(matrixPageSave()));
    connect(ui->button_add,     SIGNAL(pressed()), this, SLOT(matrixPageAdd()));
    connect(ui->button_remove,  SIGNAL(pressed()), this, SLOT(matrixPageRemove()));
    connect(ui->button_run,     SIGNAL(pressed()), this, SLOT(matrixRun()));
    connect(ui->button_clear,   SIGNAL(pressed()), this, SLOT(matrixClear()));

    ui->navSlider->setMinimum(0);
}

void AnimationCreation::UpdatePageCounter()
{
    if(matrix->PagesLoaded()) {
        ui->label_index->setText(QString::number(matrix->GetPageNumber()) + "/" + QString::number(matrix->GetPageAmount()));
        ui->navSlider->setMinimum(1);
        ui->navSlider->setMaximum(matrix->GetPageAmount());
        ui->navSlider->setValue(matrix->GetPageNumber());
    } else {
        ui->label_index->setText("#/#");
        ui->navSlider->setMinimum(0);
        ui->navSlider->setMaximum(0);
        ui->navSlider->setValue(0);
    }

}

void AnimationCreation::UpdatenavSlider(int newValue)
{
    ui->navSlider->setValue(newValue);
}

void AnimationCreation::matrixPageSlider(int newValue)
{
    if(matrix->PagesLoaded())
        matrix->GoToPage(newValue);
    UpdatePageCounter();
}

void AnimationCreation::matrixPagePrev()
{
    if(matrix->PagesLoaded())
        matrix->PrevPage();
    UpdatePageCounter();
}

void AnimationCreation::matrixPageNext()
{
    if(matrix->PagesLoaded())
        matrix->NextPage();
    UpdatePageCounter();
}

void AnimationCreation::matrixPageSave()
{
    matrix->SavePage();
    UpdatePageCounter();
}

void AnimationCreation::matrixPageAdd()
{
    matrix->AddPage();
    UpdatePageCounter();
}

void AnimationCreation::matrixPageRemove()
{
    if(matrix->PagesLoaded()) {
        matrix->RemovePage();
    }
    UpdatePageCounter();
}

void AnimationCreation::matrixClear()
{
    if(QMessageBox::warning(this,
                           "Are you sure?",
                           "You are about to clear all the led's in the matrix, are you sure about this?",
                           QMessageBox::Ok,
                           QMessageBox::Cancel) == QMessageBox::Ok) {
        matrix->Clear();
    } else {
        /// Action canceled
    }
}

void AnimationCreation::matrixRun()
{
    if(!matrix->AnimationIsRunning()) {
        matrix->RunAnimation(ui->spinbox_period->value(), true);
        ui->button_run->setText("STOP");
    } else {
        matrix->StopAnimation();
        ui->button_run->setText("RUN");
    }
    UpdatePageCounter();
}

AnimationCreation::~AnimationCreation()
{
    delete ui;
}
