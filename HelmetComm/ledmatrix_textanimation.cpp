#include "ledmatrix_main.h"

namespace LedMatrix{

bool LedMatrix_main::LoadText(QString text, bool MarqueeMode)
{
    if(text.size() <= 0) {
        // Empty text given
        StopTextAnimation();
        StopAnimation();
        SingleWords.clear();
        MarqueeText.clear();
        Clear();
        return false;
	}

    TextMarqueeMode = MarqueeMode;
	if(TextMarqueeMode) {
        Clear();
        SingleWords.clear();
        MarqueeText.clear();
        /// TODO: handle marquee function
	} else {
		QStringList list = text.split(QRegExp("\\s"));
		/// Check for imposible single words
		for(int i = 0; i < list.count(); i++) {
            if(list[i].size()>8) {
                /// Flag a word that can't be displayed in one screen
                return false;
            }
		}
		/// Stop and clear current animation
		StopTextAnimation();
		StopAnimation();
        Clear();
        SingleWords.clear();
        MarqueeText.clear();

        Page NewPage;
        for(QStringList::Iterator it = list.begin(); it != list.end(); it++) {
            MatrixCharacters->WordToMatrix(*it, &(NewPage.elem), MATRIX_COLLUMS);
            SingleWords.push_back(NewPage);
        }
        Set(&*(SingleWords.begin()));
	}

    return true;
}

void LedMatrix_main::StopTextAnimation()
{
    SingleIndex     = 0;
    MarqueeIndex    = 0;
	TextAnimationRunning 	= false;
	LoopTextAnimation 		= false;
	text_period_timer_ms 	= 0;
	text_interval_timer->stop();
}

void LedMatrix_main::RunTextAnimation(double period_s, bool loop)
{
	if(!TextAnimationRunning) {
        StopAnimation();
        StopTextAnimation();
    }

    MarqueeIndex = 0;
    SingleIndex  = 0;
    TextAnimationRunning    = true;
    LoopTextAnimation       = loop;
    text_period_timer_ms = period_s*1000;
    text_interval_timer->start(text_period_timer_ms);
}

void LedMatrix_main::NextWordInText()
{
	Clear();
	if(++SingleIndex >= SingleWords.size()) {
		SingleIndex = 0; /// Outside of vector limits
	}

    Set(&(SingleWords.at(SingleIndex)));
}

void LedMatrix_main::NextMarqueePosition()
{
	Clear();
}

void LedMatrix_main::UpdateTextAnimState()
{
	/// handle next text step
	if(LoopTextAnimation) {
		if(TextMarqueeMode) {
			NextMarqueePosition();
		} else {
			NextWordInText();
		}
	} else {
		StopTextAnimation();
		return;
	}
	text_interval_timer->start(text_period_timer_ms);
}

}
