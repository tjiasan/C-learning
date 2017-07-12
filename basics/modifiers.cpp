/*
signed,
unsigned,
long,
short
*/

unsigned x; //int is implied
unsigned int y;

#include <iostream>
using namespace std;


int main () {
    short int i;
    short unsigned int j;
    long int n;

    j = 50000;

    i = j;
    n = i;
    cout << i << " "<< j <<" " << n;
    return 0;
}

// returns -15536 50000 -15536

/* Type Qualifiers
const
volatile             value may be changed in ways not specified by program
restrict              pointer qualified is initially the only means the objects it points can be accessed
*/