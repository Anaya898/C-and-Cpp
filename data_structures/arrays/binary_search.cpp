#include <iostream>

using namespace std;

struct arr {
    int size;
    int *a;
};

void input(arr &arr) {
    cout << "Enter size for array: ";
    cin >> arr.size;

    arr.a = new int[arr.size];
    cout << "Enter " << arr.size << " elements:" << endl;
    for (int i = 0; i < arr.size; i++) {
        cin >> arr.a[i];
    }
    cout << endl;
}

void display(const arr &arr) {
    cout << "Elements of the array are: ";
    for (int i = 0; i < arr.size; i++) {
        cout << arr.a[i] << " ";
    }
    cout << endl;
}

void sort(arr &arr) {
    for (int i = 0; i < arr.size - 1; i++) {
        for (int j = 0; j < arr.size - i - 1; j++) {
            if (arr.a[j] > arr.a[j + 1]) {
                int temp = arr.a[j];
                arr.a[j] = arr.a[j + 1];
                arr.a[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array is: ";
    for (int j = 0; j < arr.size; j++) {
        cout << arr.a[j] << " ";
    }
    cout << endl;
}

int binarySearch(const arr &arr, int find) {
    int left = 0;
    int right = arr.size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr.a[mid] == find)
            return mid;  // Return the index within the sorted array

        if (arr.a[mid] < find)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Element not found
}

int main() {
    arr arr;
    input(arr);
    display(arr);

    sort(arr);

    int x;
    cout << "Enter element to search: ";
    cin >> x;

    int result = binarySearch(arr, x);
    if (result != -1) {
        cout << "Element found at index: " << result << " (in sorted array)" << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    delete[] arr.a; 
    return 0;
}
