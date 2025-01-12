#include <iostream>
using namespace std;

int findposition(int, int[], int); // Function declaration

int main() {
    int num, arry[5] = {1, 3, 5, 7, 8};
    cout << "Enter your number: " << endl;
    cin >> num;

    int position = findposition(num, arry, 5); // Call the function and store the result
    if (position != -1) {
        cout << "Position found at index: " << position << endl;
    } else {
        cout << "Number not found in the array." << endl;
    }
    return 0;
}

int findposition(int num, int arry[], int size) {
    for (int i = 0; i < size; i++) {
        if (num == arry[i]) { // Use the equality operator
            return i; // Return the position when found
        }
    }
    return -1; // Return -1 if the number is not found
}
