#include "ledmatrix_main.h"

namespace LedMatrix {

int LedMatrix_main::LoadPages(std::vector<Page> *animation){
    if(animation->empty()) {
        return -1;
    }

    Clear();
    Pages.clear();

    for(std::vector<Page>::iterator it = animation->begin(); it != animation->end(); it++) {
       Pages.push_back(*it);
    }
    PageNmbr = 1;
    return PageNmbr;
}

void LedMatrix_main::ScrollPage(bool NextPage)
{
    if(Pages.empty()) {
        PageNmbr = 0;
        return;
    }

    if(NextPage) {
        PageNmbr++;
        if(PageNmbr > Pages.size()) {
            PageNmbr = 1;
        }
    } else {
        PageNmbr--;
        if(PageNmbr <= 0) {
            PageNmbr = Pages.size();
        }
    }

    std::vector<Page>::iterator it = Pages.begin();
    if(PageNmbr <= Pages.size() && PageNmbr != 0) {
        Set(&(*(it+(PageNmbr-1))));
    } else {
        /// Catch out of list or reset to start
        PageNmbr = 1;
        Set(&(*(it+(PageNmbr-1))));
    }
}

int LedMatrix_main::FirstPage()
{
    if(!Pages.empty())
        Set(&*(Pages.begin()));
    PageNmbr = 1;
    return PageNmbr;
}

int LedMatrix_main::GoToPage(unsigned int newPosition)
{
    if(Pages.empty()) {
        return 0; /// Indicates empty page list
    }

    if((Pages.size() < newPosition)) {
        return -1; /// Indicates
    }

    PageNmbr = newPosition;

    std::vector<Page>::iterator it = Pages.begin();
    if(PageNmbr <= Pages.size() && PageNmbr != 0) {
        Set(&(*(it+(PageNmbr-1))));
    } else {
        /// Catch out of list or reset to start
        PageNmbr = 1;
        Set(&(*(it+(PageNmbr-1))));
    }

    return newPosition;
}

int LedMatrix_main::NextPage()
{
    ScrollPage(true);
    return GetPageNumber();
}

int LedMatrix_main::PrevPage()
{
    ScrollPage(false);
    return GetPageNumber();
}

int LedMatrix_main::SavePage()
{
    std::vector<LedMatrix::Page>::iterator it = Pages.begin();
    if(PageNmbr <= Pages.size() && PageNmbr != 0) {
        Get(&(*(it+(PageNmbr-1))));
    } else {
        /// Display error message
    }
    return GetPageNumber();
}

int LedMatrix_main::AddPage()
{
    LedMatrix::Page Buffer;
    std::vector<LedMatrix::Page>::iterator it = Pages.begin();
    Get(&Buffer);

    if(Pages.empty()) {
        Pages.push_back(Buffer);
        PageNmbr = 1;
    } else if(PageNmbr < Pages.size()) {
        Pages.insert(it+(PageNmbr-1), Buffer);
    } else {
        Pages.push_back(Buffer);
        PageNmbr = Pages.size();
    }
    return GetPageNumber();
}

int LedMatrix_main::RemovePage()
{
    std::vector<LedMatrix::Page>::iterator it = Pages.begin();
    if(PageNmbr <= Pages.size() && PageNmbr != 0){
        Pages.erase(it+PageNmbr-1);

        if(Pages.empty()) {
            PageNmbr = 0;
            Clear();
        } else if(PageNmbr > Pages.size()) {
            PageNmbr = Pages.size();
        } else {
            PageNmbr >= 1? PageNmbr--: PageNmbr = 1;
        }
        PrevPage();
    } else {
        /// Already empty
    }
    return GetPageNumber();
}

void LedMatrix_main::RunAnimation(double period_s, bool loop)
{
    if(!AnimationRunning) {
        AnimationRunning    = true;
        LoopAnimation       = loop;
        FirstPage();
        anim_period_timer_ms = period_s*1000;
        anim_interval_timer->start(anim_period_timer_ms);
    } else {
        // Indicate that an animation is currently running
    }
}

void LedMatrix_main::StopAnimation()
{
    AnimationRunning = false;
    LoopAnimation = false;
    anim_period_timer_ms = 0;
    anim_interval_timer->stop();
    FirstPage();
}

void LedMatrix_main::UpdateAnimationState()
{
    if(LoopAnimation) {
        NextPage();
        emit AnimationNmbrChanged(PageNmbr);
    } else {
        StopAnimation();
        return;
    }
    anim_interval_timer->start(anim_period_timer_ms);
}

}
