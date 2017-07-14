#include "optionsmenu.h"
#include "ui_optionsmenu.h"

OptionsMenu::OptionsMenu() :
    ui(new Ui::OptionsMenu)
{
    ui->setupUi(this);
    connect(ui->returnButton, SIGNAL(pressed()), this, SLOT(exit()));
}

void OptionsMenu::exit()
{
    this->hide();
    emit exitMenu();
}

//OptionsMenu::~OptionsMenu()
//{
//    delete ui;
//}
