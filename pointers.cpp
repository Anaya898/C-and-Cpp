#include<stdio.h>
#include<iostream>

#include<stdlib.h> //for malloc functions


using namespace std;

int main(){
    int a=10;   //data variable
    int *p;     //address variable 

    int A[5]={3,7,64,2,6};
    p=A; //dont use & for arrays

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
// for C language
   p=(int *)malloc(5*sizeof(int)); //allocates 5 integers to int bytes

// for C++
    p=new int[5];
    return 0;
}