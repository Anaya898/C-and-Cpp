#include <iostream>
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void display(struct Array arr) {
    cout << endl << "Elements are: " << endl;
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void append(struct Array *arr, int x) {
    if (arr->length < arr->size) {
        arr->A[arr->length++] = x;
    }
}

int main() {
    // Allocate memory for the array and initialize elements
    struct Array arr;
    arr.size = 10;
    arr.length = 5;
    arr.A = new int[arr.size];
    
    // Initialize elements of A with the specified values
    int initialValues[] = {2, 4, 6, 7, 8};
    for (int i = 0; i < arr.length; i++) {
        arr.A[i] = initialValues[i];
    }

    // Append a new element and display the array
    append(&arr, 10);
    display(arr);

    // Free allocated memory
    delete[] arr.A;

    return 0;
}
