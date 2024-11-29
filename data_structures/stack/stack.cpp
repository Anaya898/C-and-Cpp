#include<stdio.h>
#include<iostream>
using namespace std;


int push(int *arr,int top, int val,int size){
    
    if(top<size){
    arr[top++]=val;
    }else{
        cout<<"Stack is full";
    }
    return top;
}
int pop(int *arr, int top){
    top--;
    return top;
}

int main(){
    int arr[3]={0};
    int top = 0;
    top = push(arr,top,10,sizeof(arr)/sizeof(int));
    top = push(arr,top,4,sizeof(arr)/sizeof(int));
    top = push(arr,top,34,sizeof(arr)/sizeof(int));
    for(int i=0;i<top;i++){
        // arr[i]=i;
        cout<<arr[i]<<" ";
    }
    top=pop(arr,top);
for(int i=0;i<top;i++){
        // arr[i]=i;
        cout<<arr[i]<<" ";
    }
    return 0;


}
