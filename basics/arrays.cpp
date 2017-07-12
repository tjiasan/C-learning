// type arrayName [ arraySize ];

//declarations
double balance[10];

//array of exact size and values
double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};

//array of exactsize
double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};

#include <iostream>
using namespace std;
 
#include <iomanip>
using std::setw;
 
int main () {
   int n[ 10 ]; // n is an array of 10 integers
 
   // initialize elements of array n to 0          
   for ( int i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; // set element at location i to i + 100
   }
	
   cout << "Element" << setw( 13 ) << "Value" << endl;
 
   // output each array element's value                      
   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
   }
 
   return 0;
}

//multidimensional Arrays 
//type name[size1][size2]...[sizeN];

int a[3][4] = {  
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};


//passing array into fcns

void myFunction( int *param){

}

void myFunction (int param[10]){

}

void myFunction(int param[], int size){

}

//returning array from functions

int * getArray(){
    static int r[10];

    r[4]= 34;
    
    return r;
}

int main(){
    int *p;

    p = getArray();

    cout << *(p+4) << endl;

}