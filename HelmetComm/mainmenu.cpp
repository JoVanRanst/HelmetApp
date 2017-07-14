#include "mainmenu.h"
#include "animationmenu.h"
#include "textmenu.h"
#include "soundmenu.h"
#include "optionsmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    /// ANIMATIONS connections
    connect(ui->openAnimations, SIGNAL(pressed()), this, SLOT(openAnimationWindow()));
    connect(AnimationMenu::inst(), SIGNAL(exitMenu()), this, SLOT(returnAnimationWindow()));
    /// TEXT connections
    connect(ui->openText, SIGNAL(pressed()), this, SLOT(openTextWindow()));
    connect(TextMenu::inst(), SIGNAL(exitMenu()), this, SLOT(returnTextWindow()));
    /// SOUND connections
    connect(ui->openSound, SIGNAL(pressed()), this, SLOT(openSoundWindow()));
    connect(SoundMenu::inst(), SIGNAL(exitMenu()), this, SLOT(returnSoundWindow()));
    /// OPTIONS connections
    connect(ui->openOptions, SIGNAL(pressed()), this, SLOT(openOptionsWindow()));
    connect(OptionsMenu::inst(), SIGNAL(exitMenu()), this, SLOT(returnOptionsWindow()));
}

void MainMenu::openAnimationWindow(){AnimationMenu::inst()->show();}
void MainMenu::returnAnimationWindow(){}

void MainMenu::openTextWindow(){TextMenu::inst()->show();}
void MainMenu::returnTextWindow(){}

void MainMenu::openSoundWindow(){SoundMenu::inst()->show();}
void MainMenu::returnSoundWindow(){}

void MainMenu::openOptionsWindow(){OptionsMenu::inst()->show();}
void MainMenu::returnOptionsWindow(){}

MainMenu::~MainMenu()
{
    delete ui;
}
