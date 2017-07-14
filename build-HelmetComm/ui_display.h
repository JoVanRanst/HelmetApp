/********************************************************************************
** Form generated from reading UI file 'display.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_H
#define UI_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Display
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *Display)
    {
        if (Display->objectName().isEmpty())
            Display->setObjectName(QStringLiteral("Display"));
        Display->resize(335, 273);
        gridLayout_2 = new QGridLayout(Display);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(Display);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/circle_grey.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/resources/circle_red.svg"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon);
        pushButton->setCheckable(true);
        pushButton->setChecked(false);
        pushButton->setFlat(false);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(Display);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setIcon(icon);
        pushButton_3->setCheckable(true);
        pushButton_3->setChecked(false);
        pushButton_3->setFlat(false);

        gridLayout_2->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(Display);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setIcon(icon);
        pushButton_2->setCheckable(true);
        pushButton_2->setChecked(false);
        pushButton_2->setFlat(false);

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(Display);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setIcon(icon);
        pushButton_4->setCheckable(true);
        pushButton_4->setChecked(false);
        pushButton_4->setFlat(false);

        gridLayout_2->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(Display);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setIcon(icon);
        pushButton_5->setCheckable(true);
        pushButton_5->setChecked(false);
        pushButton_5->setFlat(false);

        gridLayout_2->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(Display);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setIcon(icon);
        pushButton_6->setCheckable(true);
        pushButton_6->setChecked(false);
        pushButton_6->setFlat(false);

        gridLayout_2->addWidget(pushButton_6, 0, 2, 1, 1);


        retranslateUi(Display);

        QMetaObject::connectSlotsByName(Display);
    } // setupUi

    void retranslateUi(QWidget *Display)
    {
        Display->setWindowTitle(QApplication::translate("Display", "Form", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Display: public Ui_Display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_H
