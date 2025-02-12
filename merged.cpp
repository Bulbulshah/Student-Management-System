#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter Size of the Array: ";
    cin >> size;

    int arr1[size], arr2[size], merged[2 * size];

    // Input for first array
    cout << "Enter " << size << " elements for first array: "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    // Input for second array
    cout << "Enter " << size << " elements for second array: "<<endl;
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    // Merging arrays
    for (int i = 0; i < size; i++) {
        merged[i] = arr1[i];  // Copy elements of arr1
    }
    for (int i = 0; i < size; i++) {
        merged[size + i] = arr2[i];  // Copy elements of arr2
    }

    // Printing merged array
    cout << "Merged Array: ";
    for (int i = 0; i < 2 * size; i++) {  // Fix: loop should run till 2*size
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
