#include<iostream>
using namespace std;


class rect{
    private:
    int l;
    int b;
    public:
    rect(){
        l=0;
        b=0;
    }
    rect(int length, int breadth){
        l=length;
        b=breadth;
    }
    int area ()
    {
        return l*b;

    }

    void setLen(int length){
        length=l;
    }
    void getB(int breadth){
        breadth=b;
    }
};
int main(){
    rect r(10,4);
    cout<<"Area: "<<r.area()<<endl;

    return 0;
}