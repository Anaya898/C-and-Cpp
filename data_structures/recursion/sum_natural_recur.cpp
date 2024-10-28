#include<stdio.h>
#include<iostream>

using namespace std;

// function to print sum of n natural numbers;

int fun(int n){
    if(n>0){
    //n=4-> 1+2+3+4
    // fun(n)=fun(n-1)+4-->+n;
    return fun(n-1)+n;
    }
    else {
        return 0;
    }
    // return 0;
}

int usingfor(int n){
    int s=0;
    for(int i=0;i<n+1;i++){
        s=s+i;
        // i++;
    }
    return s;
}
int main(){
    int x=fun(10);
    int y=usingfor(12);
    cout<<y<<endl;
    cout<<x<<endl;
    return 0;
}