#include<stdio.h>
#include<iostream>

using namespace std;

int factr(int n){
    if(n==0)
        return 1;
    return factr(n-1)*n;
}

int fact(int n){
    int f=1;
    for(int i=1;i<n+1;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int y=factr(5);
    cout<<y<<endl;

    int x=fact(5);
    cout<<x<<endl;
    return 0;
}