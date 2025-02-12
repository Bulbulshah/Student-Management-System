#include<iostream>
using namespace std;

int main() {
    int row, column;

    // Input the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> column;

    int matrix1[row][column], matrix2[row][column];

    // Input elements for the first matrix
    cout << "Enter elements for the first matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements for the second matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix2[i][j];
        }
    }

    // Check if the matrices are equal
    bool isEqual = true; // Not using a boolean variable, but directly checking
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                cout << "The matrices are not equal." << endl;
                return 0; // Exit the program if any element is not equal
            }
        }
    }

    // If the program reaches here, the matrices are equal
    cout << "The matrices are equal." << endl;

    return 0;
}