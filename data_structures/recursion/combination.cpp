
#include<stdio.h>
#include<iostream>

using namespace std;


// using pascals triangle
//  1
// 1 - 1
// 1 - 2 - 1
//  1 -3 -3 -1

// nCr=n!/r!(n-r)!
int C(int n, int r){
    if(r==0 || n==r){
        return 1;
    }
    return C(n-1,r-1)+C(n-1,r); 
    // returns 9C4+9C5... and goes backwards 
}

int main (){
    int x=C(10,5);
    cout<<x;
    return 0;
}