// I/O library header filex

#include <iostream> 
// for cin cout cerr clog objects


#include <iomanip> 
// formatted i/o with parameterized stream amnipulators, setw, setprecisions

#include <fstream>
//decleares services for user controlled file processing.

using namespace std;


int main(){
    char name [50];

    cout << "Please enter name: ";
    cin >> name;

    cout << "your name is : "<< name << endl;

    char str[] = "Unable to read....";
 
   cerr << "Error message : " << str << endl;
    
    clog << "Error message : " << str << endl;

   

}