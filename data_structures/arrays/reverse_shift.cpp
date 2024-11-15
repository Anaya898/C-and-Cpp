#include <iostream>
using namespace std;

struct arr {
    int size;    
    int length;  
    int *a;      
};

// Function to input and display the array
void id(arr &arr) {
    cout << "Enter number of elements: ";
    cin >> arr.length;

    if (arr.length > arr.size) {
        cout << "Number of elements exceeds the array size!" << endl;
        return;
    }

    cout << "Enter " << arr.length << " elements: ";
    for (int i = 0; i < arr.length; i++) {
        cin >> arr.a[i];
    }

    cout << "The array is: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.a[i] << " ";
    }
    cout << endl;
}

// Function to reverse 
void Reverse(arr &arr) {
    int i, j, temp;
    for (i = 0, j = arr.length - 1; i < j; i++, j--) {
        temp = arr.a[i];
        arr.a[i] = arr.a[j];
        arr.a[j] = temp;
    }
}

int main() {
    arr arr;
    cout << "Enter the maximum size of the array: ";
    cin >> arr.size;
    arr.a = new int[arr.size];
    arr.length = 0; 

    id(arr);

    Reverse(arr);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.a[i] << " ";
    }
    cout << endl;
    delete[] arr.a;

    return 0;
}
