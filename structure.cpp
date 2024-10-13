#include <iostream>
#include <stdio.h>

// the std function is for cout => std::cout
using namespace std;
struct rect {
    int length;
    int breadth;

    // total size is 4 bytes;
};
int main(){
    // just declaration & r is created inside the stack function of the main function;
    // struct rect r;

    // declaration and initialization;
    struct rect r={10,5};

    // r.length=15;
    // the dot operator is used for accessing a member of the structure/class;

    cout<<"Area of the rectangle:";
    cout<<r.length*r.breadth;
    return 0;
}