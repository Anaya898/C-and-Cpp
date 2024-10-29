#include<stdio.h>
#include<iostream>

using namespace std;


int fun(int n){
    if(n>100){
        return n-10;
        // cout<<n<<endl;
    }
    else
    {
        return fun(fun(n+11));
        // cout<<n<<endl;
    }
}
int main(){
    int r;
    r=fun(91);
    cout<<r<<endl;

    return 0;

}