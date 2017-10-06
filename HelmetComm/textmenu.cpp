#include "textmenu.h"
#include "ui_textmenu.h"
#include <QMessageBox>
#include <QString>

TextMenu::TextMenu() :
    ui(new Ui::TextMenu)
{
    ui->setupUi(this);
    ui_display = new LedMatrix::LedMatrix_main(true);
    ui->widget->setLayout(ui_display);

    connect(ui->nextButton,     SIGNAL(pressed()),      this, SLOT(NextPressed()));
    connect(ui->prevButton,     SIGNAL(pressed()),      this, SLOT(PrevPressed()));
    connect(ui->navSlider,      SIGNAL(valueChanged(int)), this, SLOT(NavSliderMoved(int)));

    connect(ui->pushReturn,     SIGNAL(pressed()),      this, SLOT(exit()));
    connect(ui->runButton,      SIGNAL(pressed()),      this, SLOT(RunPressed()));
    connect(ui->uploadButton,   SIGNAL(pressed()),      this, SLOT(uploadTextPressed()));
    connect(ui->scrollButton,   SIGNAL(toggled(bool)),  this, SLOT(scrollORsequence(bool)));

    connect(ui->updateButton,   SIGNAL(pressed()),      this, SLOT(UpdatePressed()));
}

void TextMenu::UpdatePageCounter()
{
    if(ui_display->PagesLoaded()) {
        ui->pageNmbr->setText(QString::number(ui_display->GetPageNumber()) + "/" + QString::number(ui_display->GetPageAmount()));
        ui->navSlider->setMinimum(1);
        ui->navSlider->setMaximum(ui_display->GetPageAmount());
        ui->navSlider->setValue(ui_display->GetPageNumber());
    } else {
        ui->pageNmbr->setText("#/#");
        ui->navSlider->setMinimum(0);
        ui->navSlider->setMaximum(0);
        ui->navSlider->setValue(0);
    }

}

/// NAVIGATION SLOTS

void TextMenu::NextPressed()
{
    if(ui_display->PagesLoaded())
        ui_display->NextPage();
    UpdatePageCounter();
}

void TextMenu::PrevPressed()
{
    if(ui_display->PagesLoaded())
        ui_display->PrevPage();
    UpdatePageCounter();
}

void TextMenu::NavSliderMoved(int newValue)
{
    if(ui_display->PagesLoaded())
        ui_display->GoToPage(newValue);
    UpdatePageCounter();
}

/// ANIMATION SLOTS

void TextMenu::RunPressed()
{
    if(ui_display->AnimationIsRunning()) {
        ui_display->StopAnimation();
        ui->runButton->setText("RUN");
    } else {
        ui_display->RunAnimation(ui->periodSpinBox->value(), ui->loopButton->isChecked());
        ui->runButton->setText("STOP");
    }
}

void TextMenu::UpdatePressed()
{
    ui_display->LoadText(ui->Textinput->text(), ui->scrollButton->isChecked());
    UpdatePageCounter();
}


void TextMenu::uploadTextPressed(void)
{
    QString text = ui->Textinput->text();
    QMessageBox msgBox;

    if(text.count()>0)
    {
        /// TODO: UPLOAD THE TEXT
        if(text.contains(QRegExp("[^a-zA-Z0-9$ ()[]{},.?!:;\'\"#+-_*/=%\\d\\s]")))
        {
            /// TODO: create checkerfunction utalizing LEDMATRIX_CHARACTER_DEFINITIONS enum
            msgBox.setText("Text contains non printable characters[only 0-9 and A-Z(a-z) are possible!!"); //Inaccurate, punctuation are allowed
            msgBox.exec();
        }
        else
        {
            msgBox.setText("Uploading of text not implemented yet, check again later!!");
            msgBox.exec();
        }
    }
    else
    {
        msgBox.setText("No text to upload!!");
        msgBox.exec();
    }
}

void TextMenu::scrollORsequence(bool Status)
{
    if(Status)
        ui->scrollButton->setText("WORD FOR WORD");
    else
        ui->scrollButton->setText("MARQUEE MODE");

}

void TextMenu::exit(void)
{
    this->hide();
    emit exitMenu();
}

//TextMenu::~TextMenu()
//{
//    delete ui;
//}
