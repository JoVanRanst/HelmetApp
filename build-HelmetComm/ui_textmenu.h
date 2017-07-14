/********************************************************************************
** Form generated from reading UI file 'textmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTMENU_H
#define UI_TEXTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextMenu
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *uploadButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *scrollButton;
    QPushButton *pushReturn;
    QLineEdit *Textinput;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;

    void setupUi(QWidget *TextMenu)
    {
        if (TextMenu->objectName().isEmpty())
            TextMenu->setObjectName(QStringLiteral("TextMenu"));
        TextMenu->resize(243, 240);
        gridLayout = new QGridLayout(TextMenu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(TextMenu);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 4, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 2, 1, 1);

        radioButton = new QRadioButton(TextMenu);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout->addWidget(radioButton, 5, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        uploadButton = new QPushButton(TextMenu);
        uploadButton->setObjectName(QStringLiteral("uploadButton"));
        uploadButton->setCheckable(false);

        gridLayout->addWidget(uploadButton, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        scrollButton = new QPushButton(TextMenu);
        scrollButton->setObjectName(QStringLiteral("scrollButton"));
        scrollButton->setCheckable(true);

        gridLayout->addWidget(scrollButton, 4, 1, 1, 1);

        pushReturn = new QPushButton(TextMenu);
        pushReturn->setObjectName(QStringLiteral("pushReturn"));

        gridLayout->addWidget(pushReturn, 8, 1, 1, 1);

        Textinput = new QLineEdit(TextMenu);
        Textinput->setObjectName(QStringLiteral("Textinput"));
        QFont font;
        font.setPointSize(12);
        Textinput->setFont(font);

        gridLayout->addWidget(Textinput, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 0, 1, 1);

        widget = new QWidget(TextMenu);
        widget->setObjectName(QStringLiteral("widget"));

        gridLayout->addWidget(widget, 1, 1, 1, 1);


        retranslateUi(TextMenu);

        QMetaObject::connectSlotsByName(TextMenu);
    } // setupUi

    void retranslateUi(QWidget *TextMenu)
    {
        TextMenu->setWindowTitle(QApplication::translate("TextMenu", "Text menu", Q_NULLPTR));
        label->setText(QApplication::translate("TextMenu", "Type your text here:", Q_NULLPTR));
        radioButton->setText(QApplication::translate("TextMenu", "REPEAT", Q_NULLPTR));
        uploadButton->setText(QApplication::translate("TextMenu", "UPLOAD TO HELMET", Q_NULLPTR));
        scrollButton->setText(QApplication::translate("TextMenu", "DISPLAY/SCROLL", Q_NULLPTR));
        pushReturn->setText(QApplication::translate("TextMenu", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextMenu: public Ui_TextMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTMENU_H
