#ifndef ANIMATIONCREATION_H
#define ANIMATIONCREATION_H

#include <QWidget>
#include <QTimer>
#include <vector>
#include "ledmatrix_main.h"

namespace Ui {
    class AnimationCreation;
}

class AnimationCreation : public QWidget
{
    Q_OBJECT

    public:
        explicit AnimationCreation(QWidget *parent = 0);
        ~AnimationCreation();

        /// private methods
    private:
        void ScrollPage(bool NextPage);
        void UpdatePageCounter();
        /// private members
    private:
        std::vector<LedMatrix::Page> Pages;
        unsigned int PageNmbr;
        Ui::AnimationCreation *ui;
        LedMatrix::LedMatrix_main *matrix;
        QTimer *timer;

        /// Signals and slots
    signals:
        void exitMenu();

    public slots:
        void exit();

    private slots:
        void matrixPagePrev();
        void matrixPageNext();
        void matrixPageSave();
        void matrixPageAdd();
        void matrixPageRemove();
        void matrixPageRun();
        void matrixClear();
};

#endif // ANIMATIONCREATION_H
