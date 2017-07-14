#ifndef LEDMATRIX_H
#define LEDMATRIX_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

#define MATRIX_ROWS     8
#define MATRIX_COLLUMS  40

struct Page{
    bool elem[MATRIX_ROWS][MATRIX_COLLUMS];
};

class LedMatrix: public QGridLayout
{
public:
    LedMatrix();
    void Set(Page *matrixData);
    void Get(Page *matrixData);
    void Clear();

private:
    QPushButton* FullMatrix[MATRIX_ROWS][MATRIX_COLLUMS];
};

#endif // LEDMATRIX_H
