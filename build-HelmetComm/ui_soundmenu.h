/********************************************************************************
** Form generated from reading UI file 'soundmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOUNDMENU_H
#define UI_SOUNDMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SoundMenu
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushReturn;

    void setupUi(QWidget *SoundMenu)
    {
        if (SoundMenu->objectName().isEmpty())
            SoundMenu->setObjectName(QStringLiteral("SoundMenu"));
        SoundMenu->resize(93, 41);
        verticalLayout = new QVBoxLayout(SoundMenu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushReturn = new QPushButton(SoundMenu);
        pushReturn->setObjectName(QStringLiteral("pushReturn"));

        verticalLayout->addWidget(pushReturn);


        retranslateUi(SoundMenu);

        QMetaObject::connectSlotsByName(SoundMenu);
    } // setupUi

    void retranslateUi(QWidget *SoundMenu)
    {
        SoundMenu->setWindowTitle(QApplication::translate("SoundMenu", "Sound menu", Q_NULLPTR));
        pushReturn->setText(QApplication::translate("SoundMenu", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SoundMenu: public Ui_SoundMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOUNDMENU_H
