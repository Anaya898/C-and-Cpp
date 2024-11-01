#include<stdio.h>
#include<iostream>

using namespace std;

// 0,1,1,2,3,5,8,13...

// time complexity => O(n)
int fibo(int n){
    int s,t0=0,t1=1,i;
    if(n<=1){
        return n;
    }
    for(i=2;i<n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}

int main(){
    int x, y;
    cout<<"Enter the number: ";
    cin>>y;
    x=fibo(y);
    cout<<x<<endl;
    return 0;
}