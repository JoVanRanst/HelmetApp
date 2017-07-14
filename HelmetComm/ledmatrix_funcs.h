#ifndef CHARACTERCOVERSION_H
#define CHARACTERCOVERSION_H

#include <bitset>
#include <vector>
#include <QString>
#include "ledmatrix_main.h"
#include "ledmatrix_characters.h"

class CharacterConversion
{
    public:
        static bool StringToPage(QString text, Page *outputPage) {
            return false;
        }

        static bool StringToVector(QString text, std::vector<std::bitset<8>> outputVector) {
            return false;
        }
};

#endif // CHARACTERCOVERSION_H
