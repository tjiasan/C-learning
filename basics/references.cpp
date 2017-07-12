#include <iostream>
 
using namespace std;
 
int main () {
   // declare simple variables
   int    i;
   double d;
 
   // declare reference variables
   int&    r = i;
   double& s = d;
   
   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;
 
   d = 11.7;
   cout << "Value of d : " << d << endl;
   cout << "Value of d reference : " << s  << endl;
   
   return 0;
}


// Cannot have null references
// once a reference is initialized to an object, cannot be changed to another object
// reference must be initialized when it is created


// fynction getReference return reference to ith element
#include <iostream>
#include <ctime>
 
using namespace std;
 
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
 
double& getReference( int i ) {
   return vals[i];   // return a reference to the ith element
}
 
// main function to call above defined function.
int main () {
 
   cout << "Value before change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }
 
   getReference(1) = 20.23; // change 2nd element
   getReference(3) = 70.8;  // change 4th element
 
   cout << "Value after change" << endl;
   for ( int i = 0; i < 5; i++ ) {
      cout << "vals[" << i << "] = ";
      cout << vals[i] << endl;
   }
	
   return 0;
}