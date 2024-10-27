#include<stdio.h>
#include<iostream>

using namespace std;


int pow(int m, int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return pow(m*m,n/2);
    }
    return m*pow(m*m,(n-1)/2);
}
int main()
{
    int x=pow(2,19);
    cout<<x<<endl;
    return 0;
}