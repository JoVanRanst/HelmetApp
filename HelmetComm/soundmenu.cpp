#include "soundmenu.h"
#include "ui_soundmenu.h"

SoundMenu::SoundMenu() :
    ui(new Ui::SoundMenu)
{
    ui->setupUi(this);
    connect(ui->pushReturn, SIGNAL(pressed()), this, SLOT(exit()));
}

void SoundMenu::exit()
{
    this->hide();
    emit exitMenu();
}

//SoundMenu::~SoundMenu()
//{
//    delete ui;
//}
