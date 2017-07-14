#ifndef MATRIXCHARACTERS_H
#define MATRIXCHARACTERS_H

#include <bitset>

class MatrixChar
{
    public:
        struct MatrixChar_struct{
            std::bitset<8> line[5];
        };

    public:
        MatrixChar(){
            data.line[0].reset();
            data.line[1].reset();
            data.line[2].reset();
            data.line[3].reset();
            data.line[4].reset();
            fillcount = 0;
        }
        MatrixChar(std::bitset<8> input[5]){
            for(int i=0; i<5; i++) {
                data.line[i] = input[i];
            }
            fillcount = 5;
        }

    public:
        MatrixChar_struct *operator->() {
            return &data;
        }

    private:
        int fillcount;
        MatrixChar_struct data;
};

#endif // MATRIXCHARACTERS_H
