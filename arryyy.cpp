#include <iostream>
using namespace std;

int main() {
    int size;

    // User input for array size
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int arr1[size], arr2[size], merged[2 * size];

    // Input elements for first array
    cout << "Enter " << size << " elements for first array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    // Input elements for second array
    cout << "Enter " << size << " elements for second array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }

    // Merging two arrays
    for (int i = 0; i < size; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size; i++) {
        merged[size + i] = arr2[i];
    }

    // Sorting merged array in descending order using Bubble Sort
    for (int i = 0; i < (2 * size) - 1; i++) {
        for (int j = 0; j < (2 * size) - i - 1; j++) {
            if (merged[j] < merged[j + 1]) { // Swap if next element is greater
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    // Printing sorted merged array
    cout << "\nMerged array in descending order:\n";
    for (int i = 0; i < 2 * size; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    // Counting and printing duplicate frequencies
    bool counted[2 * size] = {false}; // To track counted elements

    cout << "\nDuplicate Elements and Their Frequency:\n";
    for (int i = 0; i < 2 * size; i++) {
        if (!counted[i]) {
            int count = 1;
            for (int j = i + 1; j < 2 * size; j++) {
                if (merged[i] == merged[j]) {
                    count++;
                    counted[j] = true;
                }
            }
            if (count > 1) {
                cout << merged[i] << " appears " << count << " times\n";
            }
        }
    }

    return 0;
}
