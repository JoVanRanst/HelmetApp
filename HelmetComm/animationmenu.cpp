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

    connect(ui->openButton,   SIGNAL(pressed()), this, SLOT(openAnim()));
    connect(ui->saveButton,   SIGNAL(pressed()), this, SLOT(saveAnim()));
    connect(ui->uploadButton, SIGNAL(pressed()), this, SLOT(uploadAnim()));
    connect(ui->returnButton, SIGNAL(pressed()), this, SLOT(exit()));
}

void AnimationMenu::openAnim()
{
    /// TODO: open animationcreation menu with the choisen anim data loaded
}

void AnimationMenu::saveAnim()
{
    /// TODO: implement saving of the animation
}

void AnimationMenu::uploadAnim()
{
    /// TODO: UPLOAD the animation data
}

void AnimationMenu::exit()
{
    this->hide();
    emit exitMenu();
}

//AnimationMenu::~AnimationMenu()
//{
//    delete ui;
//}
