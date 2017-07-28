#include "ledmatrix_characters.h"

namespace LedMatrix{
class LedMatrix_Characters;

    LedMatrix_Characters::LedMatrix_char LedMatrix_Characters::enumToChar(char theChar) {
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
            /// TODO: rest of the characters: numbers
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
}
