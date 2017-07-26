#include "ledmatrix_main.h"

void LedMatrix::RunTextAnimation(double period_s, bool Marquee,  bool loop = false)
{
    if(!AnimationRunning) {
        AnimationRunning    = true;
        LoopAnimation       = loop;
        TextStart();
        period_timer_ms = period_s*1000;
        Text_interval_timer->start(period_timer_ms);
    } else {
        // Indicate that an animation is currently running
    }
}

void LedMatrix::TextStart()
{

}

void LedMatrix::UpdateTextAnimState()
{
/// handle next text step
}
