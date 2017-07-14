#include "ledmatrix.h"

LedMatrix::LedMatrix()
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
            this->addWidget(FullMatrix[i][j], i, j, 1, 1);
        }
    }
}

void LedMatrix::Set(Page *matrixData)
{
    for(int i = 0; i<MATRIX_ROWS; i++) /// Lines
    {
        for(int j = 0; j<MATRIX_COLLUMS; j++) /// Collums
        {
            FullMatrix[i][j]->setChecked(matrixData->elem[i][j]);
        }
    }
}

void LedMatrix::Get(Page *matrixData)
{
    for(int i = 0; i<MATRIX_ROWS; i++) /// Lines
    {
        for(int j = 0; j<MATRIX_COLLUMS; j++) /// Collums
        {
            matrixData->elem[i][j] = FullMatrix[i][j]->isChecked();
        }
    }
}

void LedMatrix::Clear()
{
    for(int i = 0; i<MATRIX_ROWS; i++) /// Lines
    {
        for(int j = 0; j<MATRIX_COLLUMS; j++) /// Collums
        {
            FullMatrix[i][j]->setChecked(false);
        }
    }
}
