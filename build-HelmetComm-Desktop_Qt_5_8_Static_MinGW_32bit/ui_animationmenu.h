/********************************************************************************
** Form generated from reading UI file 'animationmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONMENU_H
#define UI_ANIMATIONMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnimationMenu
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *returnButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *description;
    QSpacerItem *verticalSpacer;
    QPushButton *createButton;
    QSpacerItem *verticalSpacer_3;
    QComboBox *selectionBox;
    QPushButton *uploadButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *AnimationMenu)
    {
        if (AnimationMenu->objectName().isEmpty())
            AnimationMenu->setObjectName(QStringLiteral("AnimationMenu"));
        AnimationMenu->setWindowModality(Qt::NonModal);
        AnimationMenu->resize(185, 289);
        gridLayout = new QGridLayout(AnimationMenu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 8, 1, 1, 1);

        returnButton = new QPushButton(AnimationMenu);
        returnButton->setObjectName(QStringLiteral("returnButton"));

        gridLayout->addWidget(returnButton, 7, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        description = new QLabel(AnimationMenu);
        description->setObjectName(QStringLiteral("description"));

        gridLayout->addWidget(description, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        createButton = new QPushButton(AnimationMenu);
        createButton->setObjectName(QStringLiteral("createButton"));

        gridLayout->addWidget(createButton, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 6, 1, 1, 1);

        selectionBox = new QComboBox(AnimationMenu);
        selectionBox->setObjectName(QStringLiteral("selectionBox"));

        gridLayout->addWidget(selectionBox, 2, 1, 1, 1);

        uploadButton = new QPushButton(AnimationMenu);
        uploadButton->setObjectName(QStringLiteral("uploadButton"));

        gridLayout->addWidget(uploadButton, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(AnimationMenu);

        QMetaObject::connectSlotsByName(AnimationMenu);
    } // setupUi

    void retranslateUi(QWidget *AnimationMenu)
    {
        AnimationMenu->setWindowTitle(QApplication::translate("AnimationMenu", "Animation menu", Q_NULLPTR));
        returnButton->setText(QApplication::translate("AnimationMenu", "BACK", Q_NULLPTR));
        description->setText(QApplication::translate("AnimationMenu", "TextLabel", Q_NULLPTR));
        createButton->setText(QApplication::translate("AnimationMenu", "CREATE", Q_NULLPTR));
        selectionBox->clear();
        selectionBox->insertItems(0, QStringList()
         << QApplication::translate("AnimationMenu", "Elem1", Q_NULLPTR)
         << QApplication::translate("AnimationMenu", "Elem2", Q_NULLPTR)
        );
        uploadButton->setText(QApplication::translate("AnimationMenu", "UPLOAD", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnimationMenu: public Ui_AnimationMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONMENU_H
