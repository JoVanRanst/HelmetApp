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
        void UpdatePageCounter();

        /// private members
    private:
        Ui::AnimationCreation *ui;
        LedMatrix::LedMatrix_main *matrix;

        /// Signals and slots
    signals:
        void exitMenu();

    private slots:
        void UpdatenavSlider(int newValue);
        void matrixPageSlider(int newValue);
        void matrixPagePrev();
        void matrixPageNext();
        void matrixPageSave();
        void matrixPageAdd();
        void matrixPageRemove();
        void matrixRun();
        void matrixClear();
};

#endif // ANIMATIONCREATION_H
