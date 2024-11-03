// taylor series using horner's rule--

#include<stdio.h>
#include<iostream>

using namespace std;


// 1+x/1 [1+x/2+x^2/2*3+.....]
// 1+x/1 [1+x/2 [x/3+x^2/3*4... [] .....]]
double e(int x, int n){
    double s=1;
    for(int i=n;i>0;i--){
        s=1+x*s/i;
    }
    return s;
}
int main(){
    double result=e(2,10);
    cout<<result<<endl;
    return 0;
}