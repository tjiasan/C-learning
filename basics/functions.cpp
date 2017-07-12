return_type function_name (parameter list) {
    body
}


e.g.

int max(int num1, int num2){
    int result;

    return result;
}

declaration:

int max( int, int);

////////////WHOLE PROGRAM#include <iostream>
using namespace std;
 
// function declaration
int max(int num1, int num2);
 
int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
   int ret;
 
   // calling a function to get max value.
   ret = max(a, b);
 
   cout << "Max value is : " << ret << endl;
 
   return 0;
}
 
// function returning the max between two numbers
int max(int num1, int num2 = 20)  { //set default values, if second parameter not passed, use default
   // local variable declaration
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

/* calling a function
 calling by value: default method, changes to the parameter inside the function has no effect on outside variables
*/
void swap (int x, int y){
    int temp;
    temp = x;
    x = y;
    y= temp;
    return;
}
//doesn't do anything


/*
 calling by pointer: 
 e.g. , value of external variables swapped
 */
void swap (int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y= temp;
    return;
}


/*
 calling by reference
copies reference of args
 */

 // function definition to swap the values.
void swap(int &x, int &y) {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}