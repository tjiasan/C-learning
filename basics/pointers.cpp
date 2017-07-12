#include <iostream>

using namespace std;

int main () {
   int  var1;
   char var2[10];

   cout << "Address of var1 variable: ";
   cout << &var1 << endl;

   cout << "Address of var2 variable: ";
   cout << &var2 << endl;

   return 0;
}


//declarations
int    *ip;    // pointer to an integer
double *dp;    // pointer to a double
float  *fp;    // pointer to a float
char   *ch     // pointer to character


#include <iostream>

using namespace std;

int main () {
   int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable 

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   return 0;
}


//NULL pointers

#include <iostream>

using namespace std;

int main () {
   int  *ptr = NULL;

   cout << "The value of ptr is " << ptr ;
 
   return 0;
}

// check pointer
if(ptr)
if (!ptr)


//pointer increments

#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main () {
   int  var[MAX] = {10, 100, 200};
 
   for (int i = 0; i < MAX; i++) {
      *var = i;    // This is a correct syntax
      var++;       // This is incorrect.
      *(var + 2) = 500; //also correct because var is not changed, array name will generate a poitner constant
   }
	
   return 0;
}


///Array of pointeres

cosnt int MAX = 3;

int main(){
    int var[MAX] = {10,100,200};
    int *ptr[Max];
    
    for (int i = 0; i < MAX; i++){
        ptr[i] = &var[i]; //assign the address of the integer
    }

    for (int i =0; i < MAX; i++){
        cout << "value of Var"<< i <<" =";
        cout << *ptr[i] << endl;
    }

    return 0;
}

//Pointer to Pointer

#include <iostream>
 
using namespace std;
 
int main () {
   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   // take the address of var
   ptr = &var;

   // take the address of ptr using address of operator &
   pptr = &ptr;

   // take the value using pptr
   cout << "Value of var :" << var << endl;
   cout << "Value available at *ptr :" << *ptr << endl;
   cout << "Value available at **pptr :" << **pptr << endl;

   return 0;
}