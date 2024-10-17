#include<iostream>
using namespace std;


int add(int a, int b){
    int c=a+b;
    return c;
}
int main(){
    int num1=43, num2=45, sum;

    // through seperate functions, the workload on main is reduced;
    sum=add(num1, num2);
    cout<<sum;
    return 0;

}