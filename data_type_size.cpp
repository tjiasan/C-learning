#include <iostream>
using namespace std;

int main() {
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   return 0;
}
/*
endl inserts a new line
<< operator used to pass multiple arguments on the screen
sizeof gets size of various data types in bytes

Typedef Declarations:

typedef type <typename>
e.g.
typedef int feet;
feet distance;


Enumerated Types:

enum enum-name { list of names } var-list;

e.g.
enum color { red, green, blue } c;
c = blue;

enumarations are integers starting at 0,
if initialized e.g.
enum color { red, green=5, blue};
blue will be 6
*/