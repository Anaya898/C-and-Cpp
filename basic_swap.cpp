#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    // return 
}

int main(){
    int a, b;
    cout<<"Enter a number: " ;
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    swap(&a,&b);
    cout<<"First number is "<<a<<endl;
    cout<<"Second number is "<<b<<endl;
    return 0;

}