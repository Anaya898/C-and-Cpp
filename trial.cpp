#include<iostream>
#include<stdio.h>
using namespace std;

int rect(int l, int b) {
    int area = l * b;
    return area;
}

int main() {
    int length, breadth;
    cout << "Enter length for rectangle: ";
    cin >> length;
    cout << "Enter breadth for rectangle: ";
    cin >> breadth;

    int x = rect(length, breadth);
    cout << "Area is: " << x << endl;

    return 0;
}
