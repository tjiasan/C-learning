#include <iostream>

void func(void);

static int count = 10; //global static var

main () {
    while (count--){
        func ();
    }
    return 0;
}

void func (void) {
    static int i = 5;
    i ++;
    std::cout << "i is " << i;
    std::cout << " and count is "<< count << std::endl;
}

/*
auto: default for local vars
register: define local that should be stored in register vs ram, max size of one word, can't have unary '&' operagor applied to it, use on counters
static: local var kept in memory between fcn calls, if class, one copy of the member is shared by all objects in its class
extern: two or more files sharing variable, complie with g++ main.cpp support.cpp -o write
mutable: member of an object to override constness. mutable member can be modified by a const member function


*/