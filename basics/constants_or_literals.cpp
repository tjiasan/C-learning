Constants are fixed values that a program may not alter (literals);

Integers:
85         // decimal
0213       // octal
0x4b       // hexadecimal
30         // int
30u        // unsigned int
30l        // long
30ul       // unsigned long

Floating Point:
3.14159       // Legal
314159E-5L    // Legal
510E          // Illegal: incomplete exponent
210f          // Illegal: no decimal or exponent
.e55          // Illegal: missing integer or fraction

Character Literals: //encosed by single quotes

String Literals: //enclosed by double quotes all 3 are equivalent

"Hello, dear"

"hello, \
dear"

"hello, ""d""ear"


DEFINE Constants
#define identifier value

 e.g.
#include <iostream>
using namespace std;

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

CONST keyword

const type variable = value;

