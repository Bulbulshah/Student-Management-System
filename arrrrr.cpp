#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter Size of the array: " << endl;
    cin >> size;

    int arry1[size], arry2[size], merged[2 * size];

    cout << "Enter " << size << " Elements for Array 1: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arry1[i];
    }

    cout << "Enter " << size << " Elements for Array 2: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arry2[i];
    }

    // Merging arrays
    for (int i = 0; i < size; i++) {
        merged[i] = arry1[i];
    }
    for (int i = 0; i < size; i++) {
        merged[size + i] = arry2[i];
    }

    // Sorting the merged array in descending order using Bubble Sort
    for (int i = 0; i < 2 * size - 1; i++) {
        for (int j = 0; j < 2 * size - i - 1; j++) {
            if (merged[j] < merged[j + 1]) { // Swap if the current element is smaller than the next
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    // Display the sorted merged array
    cout << "Merged and Sorted Array in Descending Order: " << endl;
    for (int i = 0; i < 2 * size; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    // Count and print frequency of each element
    cout << "Frequency of each element: " << endl;
    for (int i = 0; i < 2 * size; i++) {
        // Skip if the element is already processed
        if (merged[i] == -1) {
            continue;
        }

        int count = 1; // Start counting from 1 (current element)
        for (int j = i + 1; j < 2 * size; j++) {
            if (merged[i] == merged[j]) {
                count++;
                merged[j] = -1; // Mark as processed
            }
        }

        // Print frequency of the element
        cout << merged[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}