/********************************************************************************
** Form generated from reading UI file 'optionsmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSMENU_H
#define UI_OPTIONSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsMenu
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *returnButton;

    void setupUi(QWidget *OptionsMenu)
    {
        if (OptionsMenu->objectName().isEmpty())
            OptionsMenu->setObjectName(QStringLiteral("OptionsMenu"));
        OptionsMenu->resize(93, 41);
        verticalLayout = new QVBoxLayout(OptionsMenu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        returnButton = new QPushButton(OptionsMenu);
        returnButton->setObjectName(QStringLiteral("returnButton"));

        verticalLayout->addWidget(returnButton);


        retranslateUi(OptionsMenu);

        QMetaObject::connectSlotsByName(OptionsMenu);
    } // setupUi

    void retranslateUi(QWidget *OptionsMenu)
    {
        OptionsMenu->setWindowTitle(QApplication::translate("OptionsMenu", "Options menu", Q_NULLPTR));
        returnButton->setText(QApplication::translate("OptionsMenu", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptionsMenu: public Ui_OptionsMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSMENU_H
