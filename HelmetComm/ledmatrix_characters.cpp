#include "ledmatrix_characters.h"
#include <list>

namespace LedMatrix{
	LedMatrix_Characters::LedMatrix_char LedMatrix_Characters::CharToEnum(char theChar) {
		switch(theChar) {
			/// Upper case
			case 'A':   return A;     break;
			case 'B':   return B;     break;
			case 'C':   return C;     break;
			case 'D':   return D;     break;
			case 'E':   return E;     break;
			case 'F':   return F;     break;
			case 'G':   return G;     break;
			case 'H':   return H;     break;
			case 'I':   return I;     break;
			case 'J':   return J;     break;
			case 'K':   return K;     break;
			case 'L':   return L;     break;
			case 'M':   return M;     break;
			case 'N':   return N;     break;
			case 'O':   return O;     break;
			case 'P':   return P;     break;
			case 'Q':   return Q;     break;
			case 'R':   return R;     break;
			case 'S':   return S;     break;
			case 'T':   return T;     break;
			case 'U':   return U;     break;
			case 'V':   return V;     break;
			case 'W':   return W;     break;
			case 'X':   return X;     break;
			case 'Y':   return Y;     break;
			case 'Z':   return Z;     break;
			/// Lower case
			case 'a':   return a;     break;
			case 'b':   return b;     break;
			case 'c':   return c;     break;
			case 'd':   return d;     break;
			case 'e':   return e;     break;
			case 'f':   return f;     break;
			case 'g':   return g;     break;
			case 'h':   return h;     break;
			case 'i':   return i;     break;
			case 'j':   return j;     break;
			case 'k':   return k;     break;
			case 'l':   return l;     break;
			case 'm':   return m;     break;
			case 'n':   return n;     break;
			case 'o':   return o;     break;
			case 'p':   return p;     break;
			case 'q':   return q;     break;
			case 'r':   return r;     break;
			case 's':   return s;     break;
			case 't':   return t;     break;
			case 'u':   return u;     break;
			case 'v':   return v;     break;
			case 'w':   return w;     break;
			case 'x':   return x;     break;
			case 'y':   return y;     break;
			case 'z':   return z;     break;
			/// Numbers
			case '0':   return nr_0;  break;
			case '1':   return nr_1;  break;
			case '2':   return nr_2;  break;
			case '3':   return nr_3;  break;
			case '4':   return nr_4;  break;
			case '5':   return nr_5;  break;
			case '6':   return nr_6;  break;
			case '7':   return nr_7;  break;
			case '8':   return nr_8;  break;
			case '9':   return nr_9;  break;
			/// Brackets
			case '(':   return bracket_round_open;    break;
			case ')':   return bracket_round_close;   break;
			case '[':   return bracket_straight_open; break;
			case ']':   return bracket_straight_close;break;
			case '{':   return bracket_curly_open;    break;
			case '}':   return bracket_curly_close;   break;
			/// Punctuations
			case ',':   return pun_comma;             break;
			case '.':   return pun_fullstop;          break;
			case '?':   return pun_questionmark;      break;
			case '!':   return pun_exclamationmark;   break;
			case ':':   return pun_colon;             break;
			case ';':   return pun_semicolon;         break;
			case '\'':  return pun_quote_open;        break;
			case '\"':  return pun_doubleqoute_open;  break;
			case '#':   return pun_number;            break;
			case '+':   return pun_plus;              break;
			case '-':   return pun_hyphen;            break;
			case '_':   return pun_dash;              break;
			case '*':   return pun_asterisk;          break;
			case '/':   return pun_stroke;            break;
			case '=':   return pun_equal;             break;
			case '%':   return pun_percentage;        break;
			/// Space
			default: // !!!!!!!!! DEFAULT !!!!!!!!!
			case ' ':   return space; break;
		}
	}

    bool LedMatrix_Characters::EnumToMatrix(LedMatrix_char theEnum, std::vector<std::bitset<8>> *output) {
        bool CopyComplete = true;
        switch(theEnum) {
            /// Default
            default: CopyComplete = false; break;
            /// Spaces
            case space:
            case space_5: PushBackChar(char_space_5, output); break;
            case space_4: PushBackChar(char_space_4, output); break;
            case space_3: PushBackChar(char_space_3, output); break;
            case space_2: PushBackChar(char_space_2, output); break;
            case space_1: PushBackChar(char_space_1, output); break;
            /// Upper case
            case A:		PushBackChar(char_A, output);     break;
            case B:		PushBackChar(char_B, output);     break;
            case C:		PushBackChar(char_C, output);     break;
            case D:		PushBackChar(char_D, output);     break;
            case E:		PushBackChar(char_E, output);     break;
            case F:		PushBackChar(char_F, output);     break;
            case G:		PushBackChar(char_G, output);     break;
            case H:		PushBackChar(char_H, output);     break;
            case I:		PushBackChar(char_I, output);     break;
            case J:		PushBackChar(char_J, output);     break;
            case K:		PushBackChar(char_K, output);     break;
            case L:		PushBackChar(char_L, output);     break;
            case M:		PushBackChar(char_M, output);     break;
            case N:		PushBackChar(char_N, output);     break;
            case O:		PushBackChar(char_O, output);     break;
            case P:		PushBackChar(char_P, output);     break;
            case Q:		PushBackChar(char_Q, output);     break;
            case R:		PushBackChar(char_R, output);     break;
            case S:		PushBackChar(char_S, output);     break;
            case T:		PushBackChar(char_T, output);     break;
            case U:		PushBackChar(char_U, output);     break;
            case V:		PushBackChar(char_V, output);     break;
            case W:		PushBackChar(char_W, output);     break;
            case X:		PushBackChar(char_X, output);     break;
            case Y:		PushBackChar(char_Y, output);     break;
            case Z:		PushBackChar(char_Z, output);     break;
            /// Lower case
            case a:		PushBackChar(char_a, output);     break;
            case b:		PushBackChar(char_b, output);     break;
            case c:		PushBackChar(char_c, output);     break;
            case d:		PushBackChar(char_d, output);     break;
            case e:		PushBackChar(char_e, output);     break;
            case f:		PushBackChar(char_f, output);     break;
            case g:		PushBackChar(char_g, output);     break;
            case h:		PushBackChar(char_h, output);     break;
            case i:		PushBackChar(char_i, output);     break;
            case j:		PushBackChar(char_j, output);     break;
            case k:		PushBackChar(char_k, output);     break;
            case l:		PushBackChar(char_l, output);     break;
            case m:		PushBackChar(char_m, output);     break;
            case n:		PushBackChar(char_n, output);     break;
            case o:		PushBackChar(char_o, output);     break;
            case p:		PushBackChar(char_p, output);     break;
            case q:		PushBackChar(char_q, output);     break;
            case r:		PushBackChar(char_r, output);     break;
            case s:		PushBackChar(char_s, output);     break;
            case t:		PushBackChar(char_t, output);     break;
            case u:		PushBackChar(char_u, output);     break;
            case v:		PushBackChar(char_v, output);     break;
            case w:		PushBackChar(char_w, output);     break;
            case x:		PushBackChar(char_x, output);     break;
            case y:		PushBackChar(char_y, output);     break;
            /// Numbers
            case nr_0:  PushBackChar(char_0, output);  break;
            case nr_1:  PushBackChar(char_1, output);  break;
            case nr_2:  PushBackChar(char_2, output);  break;
            case nr_3:  PushBackChar(char_3, output);  break;
            case nr_4:  PushBackChar(char_4, output);  break;
            case nr_5:  PushBackChar(char_5, output);  break;
            case nr_6:  PushBackChar(char_6, output);  break;
            case nr_7:  PushBackChar(char_7, output);  break;
            case nr_8:  PushBackChar(char_8, output);  break;
            case nr_9:  PushBackChar(char_9, output);  break;
            /// Arrows
            case arrow_up:      PushBackChar(char_arrow_up,     output); break;
            case arrow_down:    PushBackChar(char_arrow_down,   output); break;
            case arrow_left:    PushBackChar(char_arrow_left,   output); break;
            case arrow_right:   PushBackChar(char_arrow_right,  output); break;
            /// Brackets
            case bracket_round_open:    PushBackChar(char_brackets_round_open,      output); break;
            case bracket_round_close:   PushBackChar(char_brackets_round_close,     output); break;
            case bracket_straight_open: PushBackChar(char_brackets_straight_open,   output); break;
            case bracket_straight_close:PushBackChar(char_brackets_straight_close,  output); break;
            case bracket_curly_open:    PushBackChar(char_brackets_curly_open,      output); break;
            case bracket_curly_close:   PushBackChar(char_brackets_curly_close,     output); break;
            /// TODO: add further punctuations
        }
        return CopyComplete;
    }
}
