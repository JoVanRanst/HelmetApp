#include "ledmatrix_main.h"

namespace LedMatrix{

bool LedMatrix_main::LoadText(QString text, bool MarqueeMode)
{
    if(text.size() == 0) {
        // Empty text given
	}

    TextMarqueeMode = MarqueeMode;
	if(TextMarqueeMode) {
        Clear();
        SingleWords.clear();
        MarqueeText.clear();

	} else {
		QStringList list = text.split(QRegExp("\\s"));
		for(int i = 0; i < list.count(); i++) {
            if(list[i].size()>8) {
                /// Flag a word that can't be displayed in one screen
                return false;
            }
		}
        Clear();
        SingleWords.clear();
        MarqueeText.clear();
        for(QStringList::Iterator it = list.begin(); it != list.end(); it++) {

            //SingleWords.push_back();
        }
	}

    return true;
}

void LedMatrix_main::StopTextAnimation()
{
	TextAnimationRunning 	= false;
	LoopTextAnimation 		= false;
	text_period_timer_ms 	= 0;
	text_interval_timer->stop();
}

void LedMatrix_main::RunTextAnimation(double period_s, bool loop)
{
	if(!TextAnimationRunning) {
		MarqueeIndex = 0;
		SingleIndex  = 0;
		TextAnimationRunning    = true;
		LoopTextAnimation       = loop;
		text_period_timer_ms = period_s*1000;
        text_interval_timer->start(text_period_timer_ms);
	} else {
		// Indicate that an animation is currently running
	}
}

void LedMatrix_main::NextWordInText()
{
	Clear();
	if(++SingleIndex >= SingleWords.size()) {
		SingleIndex = 0; /// Outside of vector limits
	}

    std::vector<Page>::iterator it = SingleWords.begin();
    std::advance(it, SingleIndex);
    Set(&(*it));
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
