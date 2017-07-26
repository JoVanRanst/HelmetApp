/********************************************************************************
** Form generated from reading UI file 'animationcreation.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONCREATION_H
#define UI_ANIMATIONCREATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnimationCreation
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_prev;
    QLabel *label_index;
    QPushButton *button_next;
    QPushButton *button_save;
    QPushButton *button_add;
    QPushButton *button_remove;
    QPushButton *button_run;
    QDoubleSpinBox *spinbox_period;
    QLabel *label_2;
    QPushButton *button_clear;
    QPushButton *button_saveAnim;

    void setupUi(QWidget *AnimationCreation)
    {
        if (AnimationCreation->objectName().isEmpty())
            AnimationCreation->setObjectName(QStringLiteral("AnimationCreation"));
        AnimationCreation->resize(833, 88);
        verticalLayout = new QVBoxLayout(AnimationCreation);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(AnimationCreation);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        button_prev = new QPushButton(AnimationCreation);
        button_prev->setObjectName(QStringLiteral("button_prev"));

        horizontalLayout->addWidget(button_prev);

        label_index = new QLabel(AnimationCreation);
        label_index->setObjectName(QStringLiteral("label_index"));
        label_index->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_index);

        button_next = new QPushButton(AnimationCreation);
        button_next->setObjectName(QStringLiteral("button_next"));

        horizontalLayout->addWidget(button_next);

        button_save = new QPushButton(AnimationCreation);
        button_save->setObjectName(QStringLiteral("button_save"));

        horizontalLayout->addWidget(button_save);

        button_add = new QPushButton(AnimationCreation);
        button_add->setObjectName(QStringLiteral("button_add"));

        horizontalLayout->addWidget(button_add);

        button_remove = new QPushButton(AnimationCreation);
        button_remove->setObjectName(QStringLiteral("button_remove"));

        horizontalLayout->addWidget(button_remove);

        button_run = new QPushButton(AnimationCreation);
        button_run->setObjectName(QStringLiteral("button_run"));

        horizontalLayout->addWidget(button_run);

        spinbox_period = new QDoubleSpinBox(AnimationCreation);
        spinbox_period->setObjectName(QStringLiteral("spinbox_period"));
        spinbox_period->setMinimum(0.01);
        spinbox_period->setValue(0.2);

        horizontalLayout->addWidget(spinbox_period);

        label_2 = new QLabel(AnimationCreation);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        button_clear = new QPushButton(AnimationCreation);
        button_clear->setObjectName(QStringLiteral("button_clear"));

        horizontalLayout->addWidget(button_clear);


        verticalLayout->addLayout(horizontalLayout);

        button_saveAnim = new QPushButton(AnimationCreation);
        button_saveAnim->setObjectName(QStringLiteral("button_saveAnim"));

        verticalLayout->addWidget(button_saveAnim);


        retranslateUi(AnimationCreation);

        QMetaObject::connectSlotsByName(AnimationCreation);
    } // setupUi

    void retranslateUi(QWidget *AnimationCreation)
    {
        AnimationCreation->setWindowTitle(QApplication::translate("AnimationCreation", "Animation Creation menu", Q_NULLPTR));
        button_prev->setText(QApplication::translate("AnimationCreation", "PREV", Q_NULLPTR));
        label_index->setText(QApplication::translate("AnimationCreation", "#/#", Q_NULLPTR));
        button_next->setText(QApplication::translate("AnimationCreation", "NEXT", Q_NULLPTR));
        button_save->setText(QApplication::translate("AnimationCreation", "SAVE", Q_NULLPTR));
        button_add->setText(QApplication::translate("AnimationCreation", "ADD", Q_NULLPTR));
        button_remove->setText(QApplication::translate("AnimationCreation", "REMOVE", Q_NULLPTR));
        button_run->setText(QApplication::translate("AnimationCreation", "RUN", Q_NULLPTR));
        label_2->setText(QApplication::translate("AnimationCreation", "PERIOD[sec]", Q_NULLPTR));
        button_clear->setText(QApplication::translate("AnimationCreation", "CLEAR", Q_NULLPTR));
        button_saveAnim->setText(QApplication::translate("AnimationCreation", "SAVE ANIMATION", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnimationCreation: public Ui_AnimationCreation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONCREATION_H
