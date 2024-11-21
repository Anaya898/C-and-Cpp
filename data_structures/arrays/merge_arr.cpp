#include <iostream>
using namespace std;

// Structures to hold arrays
struct Array {
    int length;
    int *a;
};

// Merge function with a void return type
void merge(const Array &arr1, const Array &arr2, Array &arr3) {
    int i = 0, j = 0, k = 0;

    // Allocate memory for the merged array
    arr3.length = arr1.length + arr2.length;
    arr3.a = new int[arr3.length];

    // Merge the two arrays
    while (i < arr1.length && j < arr2.length) {
        if (arr1.a[i] < arr2.a[j]) {
            arr3.a[k++] = arr1.a[i++];
        } else {
            arr3.a[k++] = arr2.a[j++];
        }
    }

    // Copy remaining elements from arr1 (if any)
    while (i < arr1.length) {
        arr3.a[k++] = arr1.a[i++];
    }

    // Copy remaining elements from arr2 (if any)
    while (j < arr2.length) {
        arr3.a[k++] = arr2.a[j++];
    }
}

int main() {
    // Initialize arrays
    Array arr1, arr2, arr3;

    // Input for array 1
    cout << "Enter size of array 1: ";
    cin >> arr1.length;
    arr1.a = new int[arr1.length];
    cout << "Enter elements of array 1: ";
    for (int i = 0; i < arr1.length; i++) {
        cin >> arr1.a[i];
    }

    // Input for array 2
    cout << "Enter size of array 2: ";
    cin >> arr2.length;
    arr2.a = new int[arr2.length];
    cout << "Enter elements of array 2: ";
    for (int i = 0; i < arr2.length; i++) {
        cin >> arr2.a[i];
    }

    // Call merge function
    merge(arr1, arr2, arr3);

    // Print merged array
    cout << "Merged array: ";
    for (int i = 0; i < arr3.length; i++) {
        cout << arr3.a[i] << " ";
    }
    cout << endl;

    // Free allocated memory
    delete[] arr1.a;
    delete[] arr2.a;
    delete[] arr3.a;

    return 0;
}
