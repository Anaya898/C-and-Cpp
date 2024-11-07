#include <iostream>

using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i];
    }
}

int LinearS(struct Array arr, int key) {
    for(int i = 0; i < arr.length; i++) {
        if(key == arr.A[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    struct Array arr;
    arr.size = 8;
    arr.length = 5;
    arr.A = new int[arr.size]; 

    
    arr.A[0] = 2;
    arr.A[1] = 5;
    arr.A[2] = 4;
    arr.A[3] = 6;
    arr.A[4] = 7;

    int x = LinearS(arr, 7);
    cout << "Element found at index: " << x << endl;

    delete[] arr.A; 
    return 0;

}

