#ifndef LEDMATRIX_H
#define LEDMATRIX_H

#include <bitset>
#include <QWidget>
#include <QTimer>
#include <QGridLayout>
#include <QPushButton>

#define MATRIX_ROWS     8
#define MATRIX_COLLUMS  40

namespace LedMatrix {
    struct Page{
        std::bitset<MATRIX_ROWS> elem[MATRIX_COLLUMS];
    };

    class LedMatrix_main: public QGridLayout
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

    // Text operations
    private:
        bool                AnimationRunning;
        bool                LoopAnimation;
        double              period_timer_ms;
        QTimer             *interval_timer;
        unsigned int        PageNmbr;
        std::vector<Page>   Pages;
        // "HARDWARE"
        QPushButton*        FullMatrix[MATRIX_ROWS][MATRIX_COLLUMS];
    };
}

#endif // LEDMATRIX_H