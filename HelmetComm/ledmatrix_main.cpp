#include "ledmatrix_main.h"

LedMatrix::LedMatrix_main::LedMatrix_main(bool BlockUserInput)
{
    this->setHorizontalSpacing(0);
    this->setVerticalSpacing(0);

    QPixmap img_LedOff(":/image/LedOff.jpg");

    QIcon ico_leds;
    ico_leds.addFile(":/image/LedOff.png", QSize(img_LedOff.rect().size().width(), img_LedOff.rect().size().height()), QIcon::Normal,   QIcon::Off);
    ico_leds.addFile(":/image/LedOff.png", QSize(img_LedOff.rect().size().width(), img_LedOff.rect().size().height()), QIcon::Disabled, QIcon::Off);
    ico_leds.addFile(":/image/LedOff.png", QSize(img_LedOff.rect().size().width(), img_LedOff.rect().size().height()), QIcon::Active,   QIcon::Off);
    ico_leds.addFile(":/image/LedOn.png",  QSize(img_LedOff.rect().size().width(), img_LedOff.rect().size().height()), QIcon::Normal,   QIcon::On);
    ico_leds.addFile(":/image/LedOn.png",  QSize(img_LedOff.rect().size().width(), img_LedOff.rect().size().height()), QIcon::Disabled, QIcon::On);
    ico_leds.addFile(":/image/LedOn.png",  QSize(img_LedOff.rect().size().width(), img_LedOff.rect().size().height()), QIcon::Active,   QIcon::On);

    for(int i = 0; i<MATRIX_ROWS; i++) /// Lines
    {
        for(int j = 0; j<MATRIX_COLLUMS; j++) /// Collums
        {
            FullMatrix[i][j] = new QPushButton(ico_leds, "");
            FullMatrix[i][j]->setCheckable(true);
            FullMatrix[i][j]->setStyleSheet("QPushButton{border-width: 1px;\
                                            border-style: none;\
                                            border-radius: 1;\
                                            padding: 1px;\
                                            padding-left: 1px;\
                                            padding-right: 1px;}");
            this->addWidget(FullMatrix[i][j], i, j, 1, 1);
            if(BlockUserInput) {
                connect(FullMatrix[i][j], SIGNAL(pressed()), this, SLOT(BlockUserInput()));
            }
        }
    }

    anim_period_timer_ms = 0;
    LoopAnimation = false;
    AnimationRunning = false;
    anim_interval_timer = new QTimer;
    anim_interval_timer->setSingleShot(true);
    connect(anim_interval_timer, SIGNAL(timeout()), this, SLOT(UpdateAnimationState()));

    text_period_timer_ms = 0;
    text_interval_timer = new QTimer;
    text_interval_timer->setSingleShot(true);
    connect(text_interval_timer, SIGNAL(timeout()), this, SLOT(UpdateTextAnimState()));
}

void LedMatrix::LedMatrix_main::BlockUserInput()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    button->toggle();
}

void LedMatrix::LedMatrix_main::Set(Page *matrixData)
{
    for(int i = 0; i<MATRIX_ROWS; i++) /// Lines
    {
        for(int j = 0; j<MATRIX_COLLUMS; j++) /// Collums
        {
            /// !!! matrixData is inverse 
            FullMatrix[i][j]->setChecked(matrixData->elem[j][i]);
        }
    }
}

void LedMatrix::LedMatrix_main::Get(Page *matrixData)
{
    for(int i = 0; i<MATRIX_ROWS; i++) /// Lines
    {
        for(int j = 0; j<MATRIX_COLLUMS; j++) /// Collums
        {
            matrixData->elem[j][i] = FullMatrix[i][j]->isChecked();
        }
    }
}

void LedMatrix::LedMatrix_main::Clear()
{
    for(int i = 0; i<MATRIX_ROWS; i++) /// Lines
    {
        for(int j = 0; j<MATRIX_COLLUMS; j++) /// Collums
        {
            FullMatrix[i][j]->setChecked(false);
        }
    }
}
