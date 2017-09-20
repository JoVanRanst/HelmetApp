#include "animationmenu.h"
#include "ui_animationmenu.h"
#include "animationcreation.h"
#include <qmessagebox.h>

AnimationMenu::AnimationMenu() :
    ui(new Ui::AnimationMenu)
{
    ui->setupUi(this);
    ui_creation = new AnimationCreation();
    //ui_creation->hide();
    ui->verticalLayout->addWidget(ui_creation);

    connect(ui->uploadButton, SIGNAL(pressed()), this, SLOT(uploadAnim()));
    connect(ui->openButton,   SIGNAL(pressed()), this, SLOT(openAnim()));
    connect(ui->returnButton, SIGNAL(pressed()), this, SLOT(exit()));
}

void AnimationMenu::loadAnim(int index)
{
    /// TODO: does this have practical use?
    index ++;
}

void AnimationMenu::uploadAnim()
{
    /// TODO: UPLOAD the animation data
}

void AnimationMenu::openAnim()
{
    /// TODO: open animationcreation menu with the choisen anim data loaded
}

void AnimationMenu::exit()
{
    this->hide();
    emit exitMenu();
}

void AnimationMenu::on_openButton_pressed()
{
    /// TODO: something?
}

//AnimationMenu::~AnimationMenu()
//{
//    delete ui;
//}
