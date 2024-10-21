#include<iostream>
#include<stdio.h>

using namespace std;

int area(int l, int b){

    int summ=l*b;
    return summ;
}

int peri(int l,int b){
    int p;
    p=2*(l+b);
    return p;
}

int main(){
    int len,ber;

    cout<<"Enter length ";
    cin>>len;
    cout<<"Breadth ";
    cin>>ber;
    int x=area(len,ber);
    int y=peri(len,ber);
    cout<<x<<" "<<y<<endl;
    return 0; 

}
