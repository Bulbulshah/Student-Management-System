#include <iostream>
using namespace std;

int main() {
    int choice, num;
    bool run = true;

    while (run) {
        // Display menu
        cout << "\nSelect an operation:" << endl;
        cout << "1. Find Factorial" << endl;
        cout << "2. Find Table" << endl;
        cout << "3. Find Cube" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Factorial Calculation
                cout << "Enter a number: ";
                cin >> num;
                unsigned long long factorial = 1;
                for (int i = 1; i <= num; i++) {
                    factorial *= i;
                }
                cout << "Factorial of " << num << " is: " << factorial << endl;
                break;
            }
            case 2: {
                // Table Calculation
                cout << "Enter a number: ";
                cin >> num;
                cout << "Table of " << num << ":" << endl;
                for (int i = 1; i <= 10; i++) {
                    cout << num << " x " << i << " = " << num * i << endl;
                }
                break;
            }
            case 3: {
                // Cube Calculation
                cout << "Enter a number: ";
                cin >> num;
                cout << "Cube of " << num << " is: " << (num * num * num) << endl;
                break;
            }
            case 4: {
                // Exit
                cout << "Exiting the program. Goodbye!" << endl;
                run = false;
                break;
            }
            default: {
                // Invalid Choice
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }

    return 0;
}
