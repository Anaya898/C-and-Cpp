#include<stdio.h>
#include<iostream>

#include<stdlib.h>

// pointers always take 8 bytes of memory;

using namespace std;
int main(){
    int *p;
    // p=(int *)malloc(5*sizeof(int));
    p=new int[3];
    p[0]=10; p[1]=34; p[2]=54;

    for(int i=0;i<3;i++){
        cout<<p[i]<<endl;
    }
    delete [] p;
    free(p);
    return 0;
}