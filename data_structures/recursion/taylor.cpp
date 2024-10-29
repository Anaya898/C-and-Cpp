#include<stdio.h>
#include<iostream>

using namespace std;

// taylor series: e^x=1+x/1+x^2/2!...........+n terms;

// needs 2 functions one for sum of factorials and one for expo;
// ..sum(n),fact(n) and pow(x);

double e(int x, int n){
    double r;
    static double p=1,f=1;
    if (n==0){
        return 1;
    }
    else 
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;

    }
}

int main(){
    double x=e(3,19);
    cout<<x<<endl;
    return 0;
}