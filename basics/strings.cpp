// null terminated '\0'
//cstring class
#include <iostream>

using namespace std;

int main () {
   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

   cout << "Greeting message: ";
   cout << greeting << endl;

   return 0;
}
//fncs
#include <cstring>

strcpy(s1,s2); //copy s2 into s1
strcat(s1,s2); //concat s2 to s1
strlen(s1); //length
strcmp(s1,s2); //less than zero if s1<s2
strchr(s1,ch); //pointer to the first occurance of character in string 1
strstr(s1,s2) //pointer to the first occurance of string s2 in string s1

#include <iostream>
#include <cstring>

using namespace std;

int main () {
   char str1[15] = "Hello";
   char str2[15] = "World";
   char str3[15];
   int  len ;

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;

   // concatenates str1 and str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;

   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;

   return 0;
}




///String Class
#include <iostream>
#include <string>

using namespace std;

int main () {
   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total lenghth of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

   return 0;
}
/*
str3 : Hello
str1 + str2 : HelloWorld
str3.size() :  10
*/