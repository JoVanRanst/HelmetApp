#ifndef LEDMATRIX_CHARACTERS_H
#define LEDMATRIX_CHARACTERS_H

#include <bitset>
#include <vector>

#include <QString>

#include "ledmatrix_main.h"
#include "ledmatrix_characters_definitions.h"

namespace LedMatrix{

    class LedMatrix_Characters: private LedMatrix_Character_definitions
    {
        public:
            enum LedMatrix_char{
                nr_0, nr_1, nr_2, nr_3, nr_4, nr_5, nr_6, nr_7, nr_8, nr_9,                     /// Number
                A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,   /// Capital letters
                a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z,   /// Small letters
                space_1, space_2, space_3, space_4, space_5, space,                             /// Spaces (space_5 == space)
                arrow_up, arrow_down, arrow_left, arrow_right,                                  /// Arrows
                bracket_round_open, bracket_round_close,                                        /// Brackets round
                bracket_straight_open, bracket_straight_close,                                  /// Brackets straight
                bracket_curly_open, bracket_curly_close,                                        /// Brackets curly
                pun_fullstop, pun_comma, pun_colon, pun_semicolon, pun_exclamationmark,         /// Punctuation
                pun_questionmark, pun_apostrophe,
                pun_doubleqoute_open, pun_doubleqoute_close, pun_quote_open, pun_quote_close,
                pun_hyphen, pun_dash, pun_slash, pun_stroke,
                pun_equal, pun_plus, pun_number, pun_asterisk, pun_percentage
            };

            LedMatrix_Characters()
            {

            }

            /// Convertion functions
            void WordToMatrix(QString word, std::vector<std::bitset<8>> *out, unsigned int MatrixWidth) {
                int Fillsize = MatrixWidth - (5*word.size());
                for(int i = 0; i < 8; i++) {
                    if(i<word.size()) {
                        EnumToMatrix(CharToEnum(word.at(i)), out);
                    } else { /// Truncate empty space
                        if (Fillsize > 5) {
                            EnumToMatrix(space_5, out);
                            Fillsize -= 5;
                        } else {
                            if(Fillsize == 4) EnumToMatrix(space_4, out);
                            else if(Fillsize == 3) EnumToMatrix(space_3, out);
                            else if(Fillsize == 2) EnumToMatrix(space_2, out);
                            else if(Fillsize == 1) EnumToMatrix(space_1, out);
                        }
                    }
                }
            }

        private:
            /// Blocking constructor call
            void PushBackChar(const std::vector<std::bitset<8>> in, std::vector<std::bitset<8>> *out) {
                for(int i=4; i>=0; i--) {
                    std::bitset<8> buf;
                    for(int j=0; j<8; j++) buf[j] = in.at(i)[7-j];
                    out->push_back(buf);
                }
            }

            //enum
            LedMatrix_char CharToEnum(QChar theChar);
            bool EnumToMatrix(LedMatrix_char theEnum, std::vector<std::bitset<8>> *output);
    };
}
#endif // LEDMATRIX_CHARACTERS_H
