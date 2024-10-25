#include<stdio.h>
#include<iostream>

using namespace std;
// tail recursion
void fun(int n){
    if(n>0){
        cout<<n<<endl;
        fun(n-1);
    }
}
// if function is called before cout, its head recursion;

int main(){
    int x=5;
    fun(x);

    return 0;
}
