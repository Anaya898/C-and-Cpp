#include<iostream>
#include<stdio.h>

using namespace std;

struct rect{
    int l;
    int b;
};

void initialize(struct rect *r,int length, int breadth){
    r->l=length;
    r->b=breadth;
}

int area(struct rect r){
    return r.l*r.b;
}

int perimeter(struct rect r){
    int p=2*(r.l+r.b);
    return p;
    
}

int main(){
    rect r={0,0};
    int l,b;
    cout<<"Enter length and breadth: ";
    cin>>l>>b;
    initialize(&r,l,b);
    int a=area(r);
    int per=perimeter(r);

    cout<<"Area is: "<<a<<endl<<"Perimeter is: "<<per<<endl;
    return 0;
}
