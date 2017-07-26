#ifndef LEDMATRIX_H
#define LEDMATRIX_H

#include <bitset>
#include <QWidget>
#include <QTimer>
#include <QGridLayout>
#include <QPushButton>

#include "ledmatrix_characters.h"

#define MATRIX_ROWS     8
#define MATRIX_COLLUMS  40

namespace LedMatrix {
    struct Page{
        std::bitset<MATRIX_ROWS> elem[MATRIX_COLLUMS];
    };

    class LedMatrix_main: public QGridLayout, public LedMatrix_Characters
    {
        Q_OBJECT
    public:
        LedMatrix_main(bool BlockUserInput = false);
    private slots:
        void BlockUserInput();

    public:
        // Basic operations
        void Set(Page *matrixData);
        void Get(Page *matrixData);
        void Clear();

    public:
        // Animation operations
        int LoadPages(std::vector<Page> *animation);
        int FirstPage();
        int AddPage();
        int NextPage();
        int PrevPage();
        int SavePage();
        int RemovePage();
        int GetPageNumber() { return PageNmbr; }
        int GetPageAmount() { return Pages.size(); }
        bool PagesLoaded() { return !Pages.empty(); }
        bool AnimationIsRunning() { return AnimationRunning; }
        void StopAnimation();
        void RunAnimation(double period_ms, bool loop = false);
    private:
        void ScrollPage(bool NextPage);
    private slots:
        void UpdateAnimationState();

    public:
    // Text operations
        void RunTextAnimation(double period_s, bool Marquee,  bool loop = false);
    private slots:
        void UpdateTextAnimState();

    private:
        // Animation members
        bool                AnimationRunning;
        bool                LoopAnimation;
        double              anim_period_timer_ms;
        QTimer             *anim_interval_timer;
        unsigned int        PageNmbr;
        std::vector<Page>   Pages;

        // Text animation members
        double              text_period_timer_ms;
        QTimer             *text_interval_timer;

        // "HARDWARE"
        QPushButton*        FullMatrix[MATRIX_ROWS][MATRIX_COLLUMS];
    };
}

#endif // LEDMATRIX_H
