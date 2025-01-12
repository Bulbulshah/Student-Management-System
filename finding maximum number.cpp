#include <iostream>
using namespace std;

// Function declaration
int findMax(int arr[], int size);

int main() {
    int arr[10];

    // Input 10 elements
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Find and print the maximum number
    int maxNumber = findMax(arr, 10);
    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}

// Function definition
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger value is found
        }
    }
    return max; // Return the maximum value
}
