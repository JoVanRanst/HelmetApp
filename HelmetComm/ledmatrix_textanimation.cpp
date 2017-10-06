#include "ledmatrix_main.h"

namespace LedMatrix{

bool LedMatrix_main::LoadText(QString text, bool MarqueeMode)
{
    if(text.size() <= 0) {
        // Empty text given
        StopAnimation();
        MarqueeText.clear();
        Clear();
        return false;
	}

    TextMarqueeMode = MarqueeMode;
	if(TextMarqueeMode) {
        Clear();
        Pages.clear();
        MarqueeText.clear();
        /// TODO: handle marquee function
	} else {
		QStringList list = text.split(QRegExp("\\s"));
        /// Check for inposible single words
		for(int i = 0; i < list.count(); i++) {
            if(list[i].size()>8) {
                /// Flag a word that can't be displayed in one screen
                return false;
            }
		}
		/// Stop and clear current animation
		StopAnimation();
        Clear();
        Pages.clear();
        MarqueeText.clear();

        Page NewPage;
        for(QStringList::Iterator it = list.begin(); it != list.end(); it++) {
            MatrixCharacters->WordToMatrix(*it, &(NewPage.elem), MATRIX_COLLUMS);
            Pages.push_back(NewPage);
            NewPage.elem.clear();
        }
        PageNmbr = 1;
        GoToPage(1);
	}

    return true;
}

void LedMatrix_main::NextMarqueePosition()
{
	Clear();
}

}
