#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    // int A[5];
    // int n;
    // cin>>n;
    // int B[n];

// pointers act as a name for the array
    // dynamic allocation - pointers
    int *P;
    P=new int[5];
    // P=(int *)malloc(5*sizeof(int));
    P[0]=4;
    delete []P;
    // free (P);
// ----------------------------------------------------------------
    // size modification
    int *p=new int[5];
    p[0]=1;p[1]=5;p[2]=8;p[3]=10;p[4]=51;p[5]=54;
    int *q=new int[10];

    for(int i=0; i<5; i++){
        q[i]=p[i];
    }
    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }

    return 0;

}
