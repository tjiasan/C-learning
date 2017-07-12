#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
 

double cos (double);
double sin (double);
double tan (double);
double log (double);
double pow (double,double);
double hypot (double,double);
double sqrt (double);
int abs (int);
double fabs (double);
double floor(double);

long int j;
////Random Numbers

int main(){
    //set the seed
    srand ((unsigned)time(NULL));

    //generate 10 random numbers
    for (register int i = 0; i < 10; i++){
        // generate number
        j= rand();
        cout << " Random Number : "<< j << endl;
    }
}