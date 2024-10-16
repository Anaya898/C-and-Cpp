#include<stdio.h>
#include<iostream>

using namespace std;
int main(){
    int a=10;
    int &r=a; //& indicates reference
    r=25;
    cout<<a<<endl<<r<<endl;
    a++;

    return 0;

}