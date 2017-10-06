#ifndef LEDMATRIX_H
#define LEDMATRIX_H

#include <bitset>
#include <QGridLayout>
#include <QPushButton>
#include <QString>
#include <QTimer>
#include <QWidget>

#include "ledmatrix_characters.h"

/// CAN'T BE CHANGED IN THE CURRENT BUILD
/// problems would occur with character data
#define MATRIX_ROWS     8
#define MATRIX_COLLUMS  40

namespace LedMatrix {
    struct Page{
        std::vector<std::bitset<MATRIX_ROWS>> elem;
    };

	class LedMatrix_main: public QGridLayout, public LedMatrix_Characters
	{
		Q_OBJECT
	public:
        LedMatrix_main(bool BlockUserInput = false);
	private slots:
		void BlockUserInput();

	/// Basic operations
	public:
		void Set(Page *matrixData);
		void Get(Page *matrixData);
		void Clear();

	/// Animation operations
	/// ledmatrix_animation.cpp
	public:
		int LoadPages(std::vector<Page> *animation);
		int FirstPage();
        int GoToPage(unsigned int newPosition);
		int NextPage();
		int PrevPage();
		int SavePage();
        int AddPage();
		int RemovePage();
		int GetPageNumber() { return PageNmbr; }
		int GetPageAmount() { return Pages.size(); }
		bool PagesLoaded() { return !Pages.empty(); }
		bool AnimationIsRunning() { return AnimationRunning; }
		void StopAnimation();
		void RunAnimation(double period_ms, bool loop = false);
    signals:
        void AnimationNmbrChanged(int);

	private:
		void ScrollPage(bool NextPage);
	private slots:
		void UpdateAnimationState();

	/// Text operations
	/// ledmatrix_textanimation.cpp
	public:
        int GotToFrame(unsigned int newPosition);
        bool LoadText(QString text, bool MarqueeMode = true);
	private:
		void NextMarqueePosition();

	private:
		// Animation members
		bool                		AnimationRunning;
		bool                		LoopAnimation;
		double              		anim_period_timer_ms;
		QTimer             		   *anim_interval_timer;

		unsigned int        		PageNmbr;
		std::vector<Page>   		Pages;

		// Text animation members
		bool						TextMarqueeMode;
        LedMatrix_Characters       *MatrixCharacters;

		unsigned int 				MarqueeIndex;
		std::vector<std::bitset<8>>	MarqueeText;

        // HARDWARE
        QPushButton*	FullMatrix[MATRIX_ROWS][MATRIX_COLLUMS];
	};
}

#endif // LEDMATRIX_H
