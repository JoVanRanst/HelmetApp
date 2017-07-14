#ifndef LEDMATRIX_H
#define LEDMATRIX_H

#include <bitset>
#include <QWidget>
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
        // Basic operations
        void Set(Page *matrixData);
        void Get(Page *matrixData);
        void Clear();

    private slots:
        void BlockUserInput();

    private:
        QPushButton* FullMatrix[MATRIX_ROWS][MATRIX_COLLUMS];
    };
}

#endif // LEDMATRIX_H
