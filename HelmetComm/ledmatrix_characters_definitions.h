#ifndef LEDMATRIX_CHARACTER_DEFINITIONS_H
#define LEDMATRIX_CHARACTER_DEFINITIONS_H

#include <bitset>
#include <vector>

namespace LedMatrix {
    class LedMatrix_Character_definitions
    {
        protected:
            //------------------------------------------//
            //             Capital characters           //
            //------------------------------------------//
            const std::vector<std::bitset<8>> char_A =
                {{0b00111111},
                 {0b01000100},
                 {0b01000100},
                 {0b01000100},
                 {0b00111111}};

            const std::vector<std::bitset<8>> char_B =
                {{0b00110110},
                 {0b01001001},
                 {0b01001001},
                 {0b01001001},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_C =
                {{0b00100010},
                 {0b01000001},
                 {0b01000001},
                 {0b01000001},
                 {0b00111110}};

            const std::vector<std::bitset<8>> char_D =
                {{0b00011100},
                 {0b00100010},
                 {0b01000001},
                 {0b01000001},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_E =
                {{0b01000001},
                 {0b01001001},
                 {0b01001001},
                 {0b01001001},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_F =
                {{0b01000000},
                 {0b01001000},
                 {0b01001000},
                 {0b01001000},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_G =
                {{0b00101111},
                 {0b01001001},
                 {0b01000001},
                 {0b01000001},
                 {0b00111110}};

            const std::vector<std::bitset<8>> char_H =
                {{0b01111111},
                 {0b00001000},
                 {0b00001000},
                 {0b00001000},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_I =
                {{0b00000000},
                 {0b01000001},
                 {0b01111111},
                 {0b01000001},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_J =
                {{0b01000000},
                 {0b01111110},
                 {0b01000001},
                 {0b00000001},
                 {0b00000010}};

            const std::vector<std::bitset<8>> char_K =
                {{0b01000001},
                 {0b00100010},
                 {0b00010100},
                 {0b00001000},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_L =
                {{0b00000001},
                 {0b00000001},
                 {0b00000001},
                 {0b00000001},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_M =
                {{0b01111111},
                 {0b00100000},
                 {0b00011000},
                 {0b00100000},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_N =
                {{0b01111111},
                 {0b00000100},
                 {0b00001000},
                 {0b00010000},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_O =
                {{0b00111110},
                 {0b01000001},
                 {0b01000001},
                 {0b01000001},
                 {0b00111110}};

            const std::vector<std::bitset<8>> char_P =
                {{0b00110000},
                 {0b01001000},
                 {0b01001000},
                 {0b01001000},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_Q =
                {{0b00111101},
                 {0b01000010},
                 {0b01000101},
                 {0b01000001},
                 {0b00111110}};

            const std::vector<std::bitset<8>> char_R =
                {{0b01111111},
                 {0b01001000},
                 {0b01001100},
                 {0b01001010},
                 {0b00110001}};

            const std::vector<std::bitset<8>> char_S =
                {{0b00100110},
                 {0b01001001},
                 {0b01001001},
                 {0b01001001},
                 {0b00110010}};

            const std::vector<std::bitset<8>> char_T =
                {{0b01000000},
                 {0b01000000},
                 {0b01111111},
                 {0b01000000},
                 {0b01000000}};

            const std::vector<std::bitset<8>> char_U =
                {{0b01111110},
                 {0b00000001},
                 {0b00000001},
                 {0b00000001},
                 {0b01111110}};

            const std::vector<std::bitset<8>> char_V =
                {{0b01111100},
                 {0b00000010},
                 {0b00000001},
                 {0b00000010},
                 {0b01111100}};

            const std::vector<std::bitset<8>> char_W =
                {{0b01111110},
                 {0b00000001},
                 {0b00001110},
                 {0b00000001},
                 {0b01111110}};

            const std::vector<std::bitset<8>> char_X =
                {{0b01100011},
                 {0b00010100},
                 {0b00001000},
                 {0b00010100},
                 {0b01100011}};

            const std::vector<std::bitset<8>> char_Y =
                {{0b01110000},
                 {0b00001000},
                 {0b00000111},
                 {0b00001000},
                 {0b01110000}};

            const std::vector<std::bitset<8>> char_Z =
                {{0b01100001},
                 {0b01010001},
                 {0b01001001},
                 {0b01000101},
                 {0b01000011}};

            //------------------------------------------//
            //              Small characters            //
            //------------------------------------------//
            const std::vector<std::bitset<8>> char_a =
                {{0b00001111},
                 {0b00010101},
                 {0b00010101},
                 {0b00010101},
                 {0b00000010}};

            const std::vector<std::bitset<8>> char_b =
                {{0b00001110},
                 {0b00010001},
                 {0b00010001},
                 {0b00001001},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_c =
                {{0b00000010},
                 {0b00010001},
                 {0b00010001},
                 {0b00010001},
                 {0b00001110}};

            const std::vector<std::bitset<8>> char_d =
                {{0b01111111},
                 {0b00001001},
                 {0b00010001},
                 {0b00010001},
                 {0b00001110}};

            const std::vector<std::bitset<8>> char_e =
                {{0b00001101},
                 {0b00010101},
                 {0b00010101},
                 {0b00010101},
                 {0b00001110}};

            const std::vector<std::bitset<8>> char_f =
                {{0b00100000},
                 {0b01000000},
                 {0b01001000},
                 {0b00111111},
                 {0b00001000}};

            const std::vector<std::bitset<8>> char_g =
                {{0b00011110},
                 {0b00010101},
                 {0b00010101},
                 {0b00010101},
                 {0b00001000}};

            const std::vector<std::bitset<8>> char_h =
                {{0b00001111},
                 {0b00010000},
                 {0b00010000},
                 {0b00001000},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_i =
                {{0b00000000},
                 {0b00000001},
                 {0b01011111},
                 {0b00001001},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_j =
                {{0b00000000},
                 {0b01011110},
                 {0b00010001},
                 {0b00000001},
                 {0b00000010}};

            const std::vector<std::bitset<8>> char_k =
                {{0b00000000},
                 {0b00010001},
                 {0b00001010},
                 {0b00000100},
                 {0b01111111}};

            const std::vector<std::bitset<8>> char_l =
                {{0b00000000},
                 {0b00000001},
                 {0b01111111},
                 {0b01000001},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_m =
                {{0b00001111},
                 {0b00010000},
                 {0b00001111},
                 {0b00010000},
                 {0b00011111}};

            const std::vector<std::bitset<8>> char_n =
                {{0b00001111},
                 {0b00010000},
                 {0b00010000},
                 {0b00001000},
                 {0b00011111}};

            const std::vector<std::bitset<8>> char_o =
                {{0b00001110},
                 {0b00010001},
                 {0b00010001},
                 {0b00010001},
                 {0b00001110}};

            const std::vector<std::bitset<8>> char_p =
                {{0b00001000},
                 {0b00010100},
                 {0b00010100},
                 {0b00010100},
                 {0b00011111}};

            const std::vector<std::bitset<8>> char_q =
                {{0b00011111},
                 {0b00001100},
                 {0b00010100},
                 {0b00010100},
                 {0b00001000}};

            const std::vector<std::bitset<8>> char_r =
                {{0b00001000},
                 {0b00010000},
                 {0b00010000},
                 {0b00001000},
                 {0b00011111}};

            const std::vector<std::bitset<8>> char_s =
                {{0b00000010},
                 {0b00010101},
                 {0b00010101},
                 {0b00010101},
                 {0b00001011}};

            const std::vector<std::bitset<8>> char_t =
                {{0b00000010},
                 {0b00000001},
                 {0b00010001},
                 {0b01111110},
                 {0b00010000}};

            const std::vector<std::bitset<8>> char_u =
                {{0b00011111},
                 {0b00000010},
                 {0b00000001},
                 {0b00000001},
                 {0b00011110}};

            const std::vector<std::bitset<8>> char_v =
                {{0b00011100},
                 {0b00000010},
                 {0b00000001},
                 {0b00000010},
                 {0b00011100}};

            const std::vector<std::bitset<8>> char_w =
                {{0b00011110},
                 {0b00000001},
                 {0b00000110},
                 {0b00000001},
                 {0b00011110}};

            const std::vector<std::bitset<8>> char_x =
                {{0b00010001},
                 {0b00001010},
                 {0b00000100},
                 {0b00001010},
                 {0b00010001}};

            const std::vector<std::bitset<8>> char_y =
                {{0b00011110},
                 {0b00000101},
                 {0b00000101},
                 {0b00000101},
                 {0b00011000}};

            const std::vector<std::bitset<8>> char_z =
                {{0b00010001},
                 {0b00011001},
                 {0b00010101},
                 {0b00010011},
                 {0b00010001}};

            //------------------------------------------//
            //                  Numbers                 //
            //------------------------------------------//

            const std::vector<std::bitset<8>> char_0 =
                {{0b00111110},
                 {0b01010001},
                 {0b01001001},
                 {0b01000101},
                 {0b00111110}};

            const std::vector<std::bitset<8>> char_1 =
                {{0b00000000},
                 {0b00000001},
                 {0b01111111},
                 {0b00100001},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_2 =
                {{0b00110001},
                 {0b01001001},
                 {0b01000101},
                 {0b01000011},
                 {0b00100001}};

            const std::vector<std::bitset<8>> char_3 =
                {{0b01000110},
                 {0b01101001},
                 {0b01010001},
                 {0b01000001},
                 {0b01000010}};

            const std::vector<std::bitset<8>> char_4 =
                {{0b00000100},
                 {0b01111111},
                 {0b00100100},
                 {0b00010100},
                 {0b00001100}};

            const std::vector<std::bitset<8>> char_5 =
                {{0b01001110},
                 {0b01010001},
                 {0b01010001},
                 {0b01010001},
                 {0b01110010}};

            const std::vector<std::bitset<8>> char_6 =
                {{0b00000110},
                 {0b01001001},
                 {0b01001001},
                 {0b00101001},
                 {0b00011110}};

            const std::vector<std::bitset<8>> char_7 =
                {{0b01110000},
                 {0b01001000},
                 {0b01000111},
                 {0b01000000},
                 {0b01100000}};

            const std::vector<std::bitset<8>> char_8 =
                {{0b00110110},
                 {0b01001001},
                 {0b01001001},
                 {0b01001001},
                 {0b00110110}};

            const std::vector<std::bitset<8>> char_9 =
                {{0b00111100},
                 {0b01001010},
                 {0b01001001},
                 {0b01001001},
                 {0b00110000}};

            //------------------------------------------//
            //             space characters             //
            //  ! THESE DON'T FOLLOW SIZE RESTRICTION ! //
            //------------------------------------------//
            const std::vector<std::bitset<8>> char_space_1 =
                {{0b00000000}};

            const std::vector<std::bitset<8>> char_space_2 =
                {{0b00000000},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_space_3 =
                {{0b00000000},
                 {0b00000000},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_space_4 =
                {{0b00000000},
                 {0b00000000},
                 {0b00000000},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_space_5 =
                {{0b00000000},
                 {0b00000000},
                 {0b00000000},
                 {0b00000000},
                 {0b00000000}};

            //------------------------------------------//
            //             Arrow characters             //
            //------------------------------------------//
            const std::vector<std::bitset<8>> char_arrow_up =
                {{0b00010000},
                 {0b00100000},
                 {0b01111111},
                 {0b00100000},
                 {0b00010000}};

            const std::vector<std::bitset<8>> char_arrow_down =
                {{0b00000100},
                 {0b00000010},
                 {0b01111111},
                 {0b00000010},
                 {0b00000100}};

            const std::vector<std::bitset<8>> char_arrow_left =
                {{0b00001000},
                 {0b00001000},
                 {0b00101010},
                 {0b00011100},
                 {0b00001000}};

            const std::vector<std::bitset<8>> char_arrow_right =
                {{0b00001000},
                 {0b00011100},
                 {0b00101010},
                 {0b00001000},
                 {0b00001000}};

            //------------------------------------------//
            //           Puctuation characters          //
            //------------------------------------------//
            /// Brackets
            const std::vector<std::bitset<8>> char_brackets_round_open =
                {{0b00000000},
                 {0b01000001},
                 {0b00100010},
                 {0b00011100},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_brackets_round_close =
                {{0b00000000},
                 {0b00011100},
                 {0b00100010},
                 {0b01000001},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_brackets_straight_open =
                {{0b00000000},
                 {0b01000001},
                 {0b01000001},
                 {0b01111111},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_brackets_straight_close =
                {{0b00000000},
                 {0b01111111},
                 {0b01000001},
                 {0b01000001},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_brackets_curly_open =
                {{0b00000000},
                 {0b01000001},
                 {0b00110110},
                 {0b00001000},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_brackets_curly_close =
                {{0b00000000},
                 {0b00001000},
                 {0b00110110},
                 {0b01000001},
                 {0b00000000}};
            /// Basic punctuations
            const std::vector<std::bitset<8>> char_fullstop =
                {{0b00000000},
                 {0b00000000},
                 {0b00000011},
                 {0b00000011},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_comma =
                {{0b00000000},
                 {0b00000000},
                 {0b00000110},
                 {0b00000101},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_colon =
                {{0b00000000},
                 {0b00000000},
                 {0b00110110},
                 {0b00110110},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_semicolon =
                {{0b00000000},
                 {0b00000000},
                 {0b00110110},
                 {0b00110101},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_exclamationmark =
                {{0b00000000},
                 {0b00000000},
                 {0b01111001},
                 {0b00000000},
                 {0b00000000}};

            const std::vector<std::bitset<8>> char_questionmark =
                {{0b00110000},
                 {0b01001000},
                 {0b01000101},
                 {0b01000000},
                 {0b00100000}};

            const std::vector<std::bitset<8>> char_doubleqoute_open =
                {{0b01010000},
                 {0b00110000},
                 {0b00000000},
                 {0b01010000},
                 {0b00110000}};

            const std::vector<std::bitset<8>> char_doubleqoute_close =
                {{0b01100000},
                 {0b01010000},
                 {0b00000000},
                 {0b01100000},
                 {0b01010000}};

            const std::vector<std::bitset<8>> char_hyphen = // also minus
                {{0b00001000},
                 {0b00001000},
                 {0b00001000},
                 {0b00001000},
                 {0b00001000}};

            const std::vector<std::bitset<8>> char_dash =
                {{0b00000001},
                 {0b00000001},
                 {0b00000001},
                 {0b00000001},
                 {0b00000001}};

            const std::vector<std::bitset<8>> char_slash =
                {{0b00100000},
                 {0b00010000},
                 {0b00001000},
                 {0b00000100},
                 {0b00000010}};

            const std::vector<std::bitset<8>> char_equal =
                {{0b00010100},
                 {0b00010100},
                 {0b00010100},
                 {0b00010100},
                 {0b00010100}};

            const std::vector<std::bitset<8>> char_plus =
                {{0b00001000},
                 {0b00001000},
                 {0b00111110},
                 {0b00001000},
                 {0b00001000}};

            const std::vector<std::bitset<8>> char_number =
                {{0b00010100},
                 {0b01111111},
                 {0b00010100},
                 {0b01111111},
                 {0b00010100}};

            const std::vector<std::bitset<8>> char_asterisk =
                {{0b00010100},
                 {0b00001000},
                 {0b00111110},
                 {0b00001000},
                 {0b00010100}};

            const std::vector<std::bitset<8>> char_percentage =
                {{0b00100011},
                 {0b00010011},
                 {0b00001000},
                 {0b01100100},
                 {0b01100010}};

            const std::vector<std::bitset<8>> char_line =
                {{0b00000000},
                 {0b00000000},
                 {0b01111111},
                 {0b00000000},
                 {0b00000000}};
    /// TODO: pun_apostrophe, pun_quote_open, pun_quote_close,

    };
}

#endif // LEDMATRIX_CHARACTER_DEFINITIONS
