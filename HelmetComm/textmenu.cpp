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


    connect(ui->pushReturn,   SIGNAL(pressed()),            this, SLOT(exit()));
    connect(ui->runButton,    SIGNAL(pressed()),            this, SLOT(RunPressed()));
    connect(ui->uploadButton, SIGNAL(pressed()),            this, SLOT(uploadTextPressed()));
    connect(ui->scrollButton, SIGNAL(toggled(bool)),        this, SLOT(scrollORsequence(bool)));

    connect(ui->updateButton, SIGNAL(pressed()), this, SLOT(UpdatePressed()));
}

/// SLOTS

void TextMenu::RunPressed()
{
    if(ui_display->TextAnimationIsRunning()) {
        ui_display->StopAnimation();
        ui->runButton->setText("RUN");
    } else {
        ui_display->RunTextAnimation(ui->periodSpinBox->value(), ui->loopButton->isChecked());
        ui->runButton->setText("STOP");
    }
}

void TextMenu::UpdatePressed()
{
    ui_display->LoadText(ui->Textinput->text(), ui->scrollButton->isChecked());
}


void TextMenu::uploadTextPressed(void)
{
    QString text = ui->Textinput->text();
    QMessageBox msgBox;

    if(text.count()>0)
    {
        /// TODO: UPLOAD THE TEXT
        if(text.contains(QRegExp("[^a-zA-Z0-9()[]{},.?!:;\'\"#+-_*/=%\\d\\s]")))
        {
            /// TODO: create checkerfunction utalizing LEDMATRIX_CHARACTER_DEFINITIONS enum
            msgBox.setText("Text contains non printable characters[only 0-9 and A-Z(a-z) are possible!!"); //Inaccurate, punctuation are allowed
            msgBox.exec();
        }
        else
        {

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
