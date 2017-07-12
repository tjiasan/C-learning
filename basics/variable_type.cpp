/*
int i, j, k;
char c, ch;
float f, salary;
double d;
type variable_name = value; use extern to delcare variable at any place
*/
#include <iostream>
using namespace std;

// Variable declaration global
extern int a, b;
extern int c;
extern float f;
  
int main () {
   // Variable definition local
   int a, b;
   int c;
   float f;
 
   // actual initialization
   a = 10;
   b = 20;
   c = a + b;
 
   cout << c << endl ;

   f = 70.0/3.0;
   cout << f << endl ;
 
   return 0;
}

/* function declaration
int func();

int main() {

   // function call
   int i = func();
}

// function definition
int func() {
   return 0;
}
*/
/** initialize variables
int = 0;
char = '\0';
float = 0;
double = 0;
pointer = NULL;
**/