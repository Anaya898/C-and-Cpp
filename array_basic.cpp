#include <iostream>
// comments indicate structure for C code

// #include <stdio.h>
using namespace std;
int main(){
int a[]={3,6,4,7,8};

// printf is used for c 
cout<<sizeof(a)<<endl;
cout<<a[3]<<endl;
int n;


cout<<"Enter size for array: ";
cin>>n;
int b[n];
b[0]=45;


for(int x:b){
    cout<<x<<endl;
}
// printf("\n%d",a[1]);
return 0;
}