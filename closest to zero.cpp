#include <iostream>
using namespace std;

// Function declaration
void findClosestToZero(int arr[], int n);

int main() {
    int arr[] = {38, 44, 63, -51, -35, 19, 84, -69, 4, -46};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The given array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    findClosestToZero(arr, n); // Call the function

    return 0;
}

// Function definition
void findClosestToZero(int arr[], int n) {

    // Manually sort the array (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int minSum = 2147483647; // Largest positive value for 32-bit int
    int closestPair1 = 0, closestPair2 = 0;

    // Iterate through all pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                closestPair1 = arr[i];
                closestPair2 = arr[j];
            }
        }
    }

    cout << "The Pair of elements whose sum is minimum are:\n";
    cout << "[" << closestPair1 << ", " << closestPair2 << "]" << endl;
}
