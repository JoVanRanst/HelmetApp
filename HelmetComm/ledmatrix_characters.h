#ifndef DEFINEDCHARACTERS_H
#define DEFINEDCHARACTERS_H

#include <bitset>

namespace LedMatrix{
    class LedMatrix_Characters{

    public:
        enum LedMatrix_char{
            nr_0, nr_1, nr_2, nr_3, nr_4, nr_5, nr_6, nr_7, nr_8, nr_9, 
            A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,   /// Capital letters
            a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z,   /// Small letters
            space_1, space_2, space_3, space_4, space_5, space,                             /// Spaces (space_5 == space)
            arrow_up, arrow_down, arrow_left, arrow_right,                                  /// Arrows
            bracket_round_open, bracket_round_close,                                        /// Brackets round
            bracket_straight_open, bracket_straight_close,                                  /// Brackets straight
            bracket_curly_open, bracket_curly_close,                                        /// Brackets curly
            pun_fullstop, pun_colon, pun_comma, pun_semicolon, pun_exclamationmark,         /// Punctuation
            pun_questionmark, pun_apostrophe, pun_quote_open, pun_quote_close,
            pun_doubleqoute_open, pun_doubleqoute_close, pun_hyphen, pun_dash,
            pun_asterisk, pun_stroke, pun_slash, pun_equal, pun_plus, pun_number,
            pun_percentage
        };  

    public:
//        bool GetLedMatrixChar(char charToFind, std::bitset<8> *OutputBuf)
//        {
//            return false;
//        }

    private:
        LedMatrix_char enumToChar(char theChar);

    private:
        //------------------------------------------//
        //             Capital characters           //
        //------------------------------------------//
        const std::bitset<8> char_A[5] =
            {0b00111111,
             0b01000100,
             0b01000100,
             0b01000100,
             0b00111111};

        const std::bitset<8> char_B[5] =
            {0b00110110,
             0b01001001,
             0b01001001,
             0b01001001,
             0b01111111};

        const std::bitset<8> char_C[5] =
            {0b00100010,
             0b01000001,
             0b01000001,
             0b01000001,
             0b00111110};

        const std::bitset<8> char_D[5] =
            {0b00011100,
             0b00100010,
             0b01000001,
             0b01000001,
             0b01111111};

        const std::bitset<8> char_E[5] =
            {0b01000001,
             0b01001001,
             0b01001001,
             0b01001001,
             0b01111111};

        const std::bitset<8> char_F[5] =
            {0b01000000,
             0b01001000,
             0b01001000,
             0b01001000,
             0b01111111};

        const std::bitset<8> char_G[5] =
            {0b00101111,
             0b01001001,
             0b01000001,
             0b01000001,
             0b00111110};

        const std::bitset<8> char_H[5] =
            {0b01111111,
             0b00001000,
             0b00001000,
             0b00001000,
             0b01111111};

        const std::bitset<8> char_I[5] =
            {0b00000000,
             0b01000001,
             0b01111111,
             0b01000001,
             0b00000000};

        const std::bitset<8> char_J[5] =
            {0b01000000,
             0b01111110,
             0b01000001,
             0b00000001,
             0b00000010};

        const std::bitset<8> char_K[5] =
            {0b01000001,
             0b00100010,
             0b00010100,
             0b00001000,
             0b01111111};

        const std::bitset<8> char_L[5] =
            {0b00000001,
             0b00000001,
             0b00000001,
             0b00000001,
             0b01111111};

        const std::bitset<8> char_M[5] =
            {0b01111111,
             0b00100000,
             0b00011000,
             0b00100000,
             0b01111111};

        const std::bitset<8> char_N[5] =
            {0b01111111,
             0b00000100,
             0b00001000,
             0b00010000,
             0b01111111};

        const std::bitset<8> char_O[5] =
            {0b00111110,
             0b01000001,
             0b01000001,
             0b01000001,
             0b00111110};

        const std::bitset<8> char_P[5] =
            {0b00110000,
             0b01001000,
             0b01001000,
             0b01001000,
             0b01111111};

        const std::bitset<8> char_Q[5] =
            {0b00111101,
             0b01000010,
             0b01000101,
             0b01000001,
             0b00111110};

        const std::bitset<8> char_R[5] =
            {0b01111111,
             0b01001000,
             0b01001100,
             0b01001010,
             0b00110001};

        const std::bitset<8> char_S[5] =
            {0b00100110,
             0b01001001,
             0b01001001,
             0b01001001,
             0b00110010};

        const std::bitset<8> char_T[5] =
            {0b01000000,
             0b01000000,
             0b01111111,
             0b01000000,
             0b01000000};

        const std::bitset<8> char_U[5] =
            {0b01111110,
             0b00000001,
             0b00000001,
             0b00000001,
             0b01111110};

        const std::bitset<8> char_V[5] =
            {0b01111100,
             0b00000010,
             0b00000001,
             0b00000010,
             0b01111100};

        const std::bitset<8> char_W[5] =
            {0b01111110,
             0b00000001,
             0b00001110,
             0b00000001,
             0b01111110};

        const std::bitset<8> char_X[5] =
            {0b01100011,
             0b00010100,
             0b00001000,
             0b00010100,
             0b01100011};

        const std::bitset<8> char_Y[5] =
            {0b01110000,
             0b00001000,
             0b00000111,
             0b00001000,
             0b01110000};

        const std::bitset<8> char_Z[5] =
            {0b01100001,
             0b01010001,
             0b01001001,
             0b01000101,
             0b01000011};

        //------------------------------------------//
        //              small characters            //
        //------------------------------------------//

        const std::bitset<8> char_a[5] =
            {0b00001111,
             0b00010101,
             0b00010101,
             0b00010101,
             0b00000010};

        const std::bitset<8> char_b[5] =
            {0b00001110,
             0b00010001,
             0b00010001,
             0b00001001,
             0b01111111};

        const std::bitset<8> char_c[5] =
            {0b00000010,
             0b00010001,
             0b00010001,
             0b00010001,
             0b00001110};

        const std::bitset<8> char_d[5] =
            {0b01111111,
             0b00001001,
             0b00010001,
             0b00010001,
             0b00001110};

        const std::bitset<8> char_e[5] =
            {0b00001101,
             0b00010101,
             0b00010101,
             0b00010101,
             0b00001110};

        const std::bitset<8> char_f[5] =
            {0b00100000,
             0b01000000,
             0b01001000,
             0b00111111,
             0b00001000};

        const std::bitset<8> char_g[5] =
            {0b00011110,
             0b00010101,
             0b00010101,
             0b00010101,
             0b00001000};

        const std::bitset<8> char_h[5] =
            {0b00001111,
             0b00010000,
             0b00010000,
             0b00001000,
             0b01111111};

        const std::bitset<8> char_i[5] =
            {0b00000000,
             0b00000001,
             0b01011111,
             0b00001001,
             0b00000000};

        const std::bitset<8> char_j[5] =
            {0b00000000,
             0b01011110,
             0b00010001,
             0b00000001,
             0b00000010};

        const std::bitset<8> char_k[5] =
            {0b00000000,
             0b00010001,
             0b00001010,
             0b00000100,
             0b01111111};

        const std::bitset<8> char_l[5] =
            {0b00000000,
             0b00000001,
             0b01111111,
             0b01000001,
             0b00000000};

        const std::bitset<8> char_m[5] =
            {0b00001111,
             0b00010000,
             0b00001111,
             0b00010000,
             0b00011111};

        const std::bitset<8> char_n[5] =
            {0b00001111,
             0b00010000,
             0b00010000,
             0b00001000,
             0b00011111};

        const std::bitset<8> char_o[5] =
            {0b00001110,
             0b00010001,
             0b00010001,
             0b00010001,
             0b00001110};

        const std::bitset<8> char_p[5] =
            {0b00001000,
             0b00010100,
             0b00010100,
             0b00010100,
             0b00011111};

        const std::bitset<8> char_q[5] =
            {0b00011111,
             0b00001100,
             0b00010100,
             0b00010100,
             0b00001000};

        const std::bitset<8> char_r[5] =
            {0b00001000,
             0b00010000,
             0b00010000,
             0b00001000,
             0b00011111};

        const std::bitset<8> char_s[5] =
            {0b00000010,
             0b00010101,
             0b00010101,
             0b00010101,
             0b00001011};

        const std::bitset<8> char_t[5] =
            {0b00000010,
             0b00000001,
             0b00010001,
             0b01111110,
             0b00010000};

        const std::bitset<8> char_u[5] =
            {0b00011111,
             0b00000010,
             0b00000001,
             0b00000001,
             0b00011110};

        const std::bitset<8> char_v[5] =
            {0b00011100,
             0b00000010,
             0b00000001,
             0b00000010,
             0b00011100};

        const std::bitset<8> char_w[5] =
            {0b00011110,
             0b00000001,
             0b00000110,
             0b00000001,
             0b00011110};

        const std::bitset<8> char_x[5] =
            {0b00010001,
             0b00001010,
             0b00000100,
             0b00001010,
             0b00010001};

        const std::bitset<8> char_y[5] =
            {0b00011110,
             0b00000101,
             0b00000101,
             0b00000101,
             0b00011000};

        const std::bitset<8> char_z[5] =
            {0b00010001,
             0b00011001,
             0b00010101,
             0b00010011,
             0b00010001};

        //------------------------------------------//
        //                  Numbers                 //
        //------------------------------------------//

        const std::bitset<8> char_0[5] =
            {0b00111110,
             0b01010001,
             0b01001001,
             0b01000101,
             0b00111110};

        const std::bitset<8> char_1[5] =
            {0b00000000,
             0b00000001,
             0b01111111,
             0b00100001,
             0b00000000};

        const std::bitset<8> char_2[5] =
            {0b00110001,
             0b01001001,
             0b01000101,
             0b01000011,
             0b00100001};

        const std::bitset<8> char_3[5] =
            {0b01000110,
             0b01101001,
             0b01010001,
             0b01000001,
             0b01000010};

        const std::bitset<8> char_4[5] =
            {0b00000100,
             0b01111111,
             0b00100100,
             0b00010100,
             0b00001100};

        const std::bitset<8> char_5[5] =
            {0b01001110,
             0b01010001,
             0b01010001,
             0b01010001,
             0b01110010};

        const std::bitset<8> char_6[5] =
            {0b00000110,
             0b01001001,
             0b01001001,
             0b00101001,
             0b00011110};

        const std::bitset<8> char_7[5] =
            {0b01110000,
             0b01001000,
             0b01000111,
             0b01000000,
             0b01100000};

        const std::bitset<8> char_8[5] =
            {0b00110110,
             0b01001001,
             0b01001001,
             0b01001001,
             0b00110110};

        const std::bitset<8> char_9[5] =
            {0b00111100,
             0b01001010,
             0b01001001,
             0b01001001,
             0b00110000};

        //------------------------------------------//
        //             space characters             //
        //  ! THESE DON'T FOLLOW SIZE RESTRICTION ! //
        //------------------------------------------//
        const std::bitset<8> char_space_1[1] =
            {0b00000000};

        const std::bitset<8> char_space_2[2] =
            {0b00000000,
             0b00000000};

        const std::bitset<8> char_space_3[3] =
            {0b00000000,
             0b00000000,
             0b00000000};

        const std::bitset<8> char_space_4[4] =
            {0b00000000,
             0b00000000,
             0b00000000,
             0b00000000};

        const std::bitset<8> char_space_5[5] =
            {0b00000000,
             0b00000000,
             0b00000000,
             0b00000000,
             0b00000000};

        //------------------------------------------//
        //             Arrow characters             //
        //------------------------------------------//
        const std::bitset<8> char_arrow_up[5] =
            {0b00010000,
             0b00100000,
             0b01111111,
             0b00100000,
             0b00010000};

        const std::bitset<8> char_arrow_down[5] =
            {0b00000100,
             0b00000010,
             0b01111111,
             0b00000010,
             0b00000100};

        const std::bitset<8> char_arrow_left[5] =
            {0b00001000,
             0b00001000,
             0b00101010,
             0b00011100,
             0b00001000};

        const std::bitset<8> char_arrow_right[5] =
            {0b00001000,
             0b00011100,
             0b00101010,
             0b00001000,
             0b00001000};

        //------------------------------------------//
        //           Puctuation characters          //
        //------------------------------------------//
        /// Brackets
        const std::bitset<8> char_brackets_round_open[5] =
            {0b00000000,
             0b01000001,
             0b00100010,
             0b00011100,
             0b00000000};

        const std::bitset<8> char_brackets_round_close[5] =
            {0b00000000,
             0b00011100,
             0b00100010,
             0b01000001,
             0b00000000};

        const std::bitset<8> char_brackets_straight_open[5] =
            {0b00000000,
             0b01000001,
             0b01000001,
             0b01111111,
             0b00000000};

        const std::bitset<8> char_brackets_straight_close[5] =
            {0b00000000,
             0b01111111,
             0b01000001,
             0b01000001,
             0b00000000};

        const std::bitset<8> char_brackets_curly_open[5] =
            {0b00000000,
             0b01000001,
             0b00110110,
             0b00001000,
             0b00000000};

        const std::bitset<8> char_brackets_curly_close[5] =
            {0b00000000,
             0b00001000,
             0b00110110,
             0b01000001,
             0b00000000};
        /// Basic punctuations
        const std::bitset<8> char_fullstop[5] =
            {0b00000000,
             0b00000000,
             0b00000011,
             0b00000011,
             0b00000000};

        const std::bitset<8> char_comma[5] =
            {0b00000000,
             0b00000000,
             0b00000110,
             0b00000101,
             0b00000000};

        const std::bitset<8> char_exclamationmark[5] =
            {0b00000000,
             0b00000000,
             0b01111001,
             0b00000000,
             0b00000000};

        const std::bitset<8> char_questionmark[5] =
            {0b00110000,
             0b01001000,
             0b01000101,
             0b01000000,
             0b00100000};

        const std::bitset<8> char_colon[5] =
            {0b00000000,
             0b00000000,
             0b00110110,
             0b00110110,
             0b00000000};

        const std::bitset<8> char_semicolon[5] =
            {0b00000000,
             0b00000000,
             0b00110110,
             0b00110101,
             0b00000000};

        const std::bitset<8> char_doubleqoute_open[5] =
            {0b01010000,
             0b00110000,
             0b00000000,
             0b01010000,
             0b00110000};

        const std::bitset<8> char_doubleqoute_close[5] =
            {0b01100000,
             0b01010000,
             0b00000000,
             0b01100000,
             0b01010000};

        const std::bitset<8> char_hyphen[5] = // also minus
            {0b00001000,
             0b00001000,
             0b00001000,
             0b00001000,
             0b00001000};

        const std::bitset<8> char_dash[5] =
            {0b00000001,
             0b00000001,
             0b00000001,
             0b00000001,
             0b00000001};

        const std::bitset<8> char_slash[5] =
            {0b00100000,
             0b00010000,
             0b00001000,
             0b00000100,
             0b00000010};

        const std::bitset<8> char_equal[5] =
            {0b00010100,
             0b00010100,
             0b00010100,
             0b00010100,
             0b00010100};

        const std::bitset<8> char_plus[5] =
            {0b00001000,
             0b00001000,
             0b00111110,
             0b00001000,
             0b00001000};

        const std::bitset<8> char_number[5] =
            {0b00010100,
             0b01111111,
             0b00010100,
             0b01111111,
             0b00010100};

        const std::bitset<8> char_asterisk[5] =
            {0b00010100,
             0b00001000,
             0b00111110,
             0b00001000,
             0b00010100};

        //pun_apostrophe, pun_quote_open, pun_quote_close,

    };
}
#endif // DEFINEDCHARACTERS_H
