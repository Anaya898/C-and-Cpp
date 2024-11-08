#include<stdio.h>
#include<iostream>

using namespace std;


struct Array{
    int size;
    int *a;
};


void Arr(Array &Array){
int size;

cout<<"Enter array size: ";
cin>>Array.size;

Array.a=new int[Array.size];

cout << "Enter " << Array.size << " elements:" << endl;
    for (int i = 0; i < Array.size; i++) {
        cin >> Array.a[i];
    }

cout << "The elements of the array are: ";
    for (int i = 0; i < Array.size; i++) {
        cout << Array.a[i] << " ";
    }
    cout << endl;
};


void sort(Array &Array) {
    int temp;
    for (int i = 0; i < Array.size - 1; i++) {
        for (int j = 0; j < Array.size - i - 1; j++) {
            if (Array.a[j] > Array.a[j + 1]) {

                temp = Array.a[j];
                Array.a[j] = Array.a[j + 1];
                Array.a[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array is: ";
    for (int j = 0; j < Array.size; j++) {
        cout << Array.a[j] << " ";
    }
    cout << endl;
}

int main (){
    Array Array;
    Arr(Array);
    sort(Array);

    return 0;
}