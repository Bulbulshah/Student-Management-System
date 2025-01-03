#include <iostream>
#include <string>

using namespace std;

// Define a maximum number of students
const int MAX_STUDENTS = 100;

// Struct to represent a student
struct Student {
    string name;
    string id;
    string department;
};

// Array to store student details
Student students[MAX_STUDENTS];
int studentCount = 0;

// Function declarations
void addStudent();
void displayStudents();

int main() {
    int choice;
    do {
        // Display menu
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle user choice
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}

// Function definitions

// Function to add a student
void addStudent() {
    // Input student details
    cout << "Enter Student Name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, students[studentCount].name);

    cout << "Enter Student ID: ";
    getline(cin, students[studentCount].id);

    cout << "Enter Department: ";
    getline(cin, students[studentCount].department);

    // Increment the student count
    studentCount++;
    cout << "Student added successfully!" << endl;
}

// Function to display all students
void displayStudents() {
    // Check if there are any students to display
    if (studentCount == 0) {
        cout << "No students to display." << endl;
        return;
    }

    // Display all stored students
    cout << "List of Students:" << endl;
    for (int i = 0; i < studentCount; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Department: " << students[i].department << endl;
        cout << endl;
    }
}
