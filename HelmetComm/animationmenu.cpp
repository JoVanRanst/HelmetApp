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

    connect(ui->selectionBox, SIGNAL(currentIndexChanged(int)), this, SLOT(loadAnim(int)));
    connect(ui->uploadButton, SIGNAL(pressed()), this, SLOT(uploadAnim()));
    connect(ui->createButton, SIGNAL(pressed()), this, SLOT(createAnim()));
    connect(ui->returnButton, SIGNAL(pressed()), this, SLOT(exit()));
}

void AnimationMenu::loadAnim(int index)
{
    index++;
    /// IMPLEMENT the loading of animations
//    QString animName = ui->selectionBox->itemText(index);
//    QMessageBox::warning(NULL, "selected", animName, QMessageBox::Ok, QMessageBox::Abort);
}

void AnimationMenu::uploadAnim()
{
    /// UPLOAD the animation data
}

void AnimationMenu::createAnim()
{
    this->hide();
    emit openCreate();
    ui_creation->show();
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
