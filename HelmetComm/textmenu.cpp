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
    connect(ui->uploadButton, SIGNAL(pressed()),            this, SLOT(uploadTextPressed()));
    connect(ui->scrollButton, SIGNAL(toggled(bool)),        this, SLOT(scrollORsequence(bool)));
    connect(ui->Textinput,    SIGNAL(textChanged(QString)), this, SLOT(AssembleDisplayBuffer(QString)));
}

/// SLOTS
void TextMenu::uploadTextPressed(void)
{
    QString text = ui->Textinput->text();
    QMessageBox msgBox;

    if(text.count()>0)
    {
        if(text.contains(QRegExp("[^a-zA-Z\\d\\s]")))
        {
            msgBox.setText("Text contains non printable characters[only 0-9 and A-Z(a-z) are possible!!");
            msgBox.exec();
        }
        else
        {
            /// UPLOAD THE TEXT
            //ui_display->Set();
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

void TextMenu::AssembleDisplayBuffer(QString text)
{

}

//// State checker
void TextMenu::UpdateState(void)
{

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
