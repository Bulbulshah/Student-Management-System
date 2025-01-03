#include <iostream>
#include <string>
using namespace std;

// Define a structure for Student
struct Student {
    string name;
    int id;
    string department;
};

int main();
void addStudent(Student students[], int& count, int maxSize);
void displayStudents(const Student students[], int count);
void searchStudentByID(const Student students[], int count);
void updateStudent(Student students[], int count);
void deleteStudent(Student students[], int& count);

int main() {
    const int maxSize = 100;
    Student students[maxSize];
    int count = 0;
    int choice;

    do {
        cout << "\nStudent Management System" << endl;
        cout << "1. Add a Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search for a Student by ID" << endl;
        cout << "4. Update Student Information" << endl;
        cout << "5. Delete a Student" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(students, count, maxSize);
                break;
            case 2:
                displayStudents(students, count);
                break;
            case 3:
                searchStudentByID(students, count);
                break;
            case 4:
                updateStudent(students, count);
                break;
            case 5:
                deleteStudent(students, count);
                break;
            case 6:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

void addStudent(Student students[], int& count, int maxSize) {
    if (count >= maxSize) {
        cout << "Error: Cannot add more students. Maximum capacity reached." << endl;
        return;
    }

    Student newStudent;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, newStudent.name);
    cout << "Enter Student ID: ";
    cin >> newStudent.id;
    cout << "Enter Student Department: ";
    cin.ignore();
    getline(cin, newStudent.department);
    students[count++] = newStudent;
    cout << "Student added successfully!" << endl;
}

void displayStudents(const Student students[], int count) {
    if (count == 0) {
        cout << "No students available." << endl;
        return;
    }

    cout << "\nList of Students:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Department: " << students[i].department << endl;
    }
}

void searchStudentByID(const Student students[], int count) {
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    for (int i = 0; i < count; ++i) {
        if (students[i].id == id) {
            cout << "Student found: " << endl;
            cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Department: " << students[i].department << endl;
            return;
        }
    }

    cout << "Student with ID " << id << " not found." << endl;
}

void updateStudent(Student students[], int count) {
    int id;
    cout << "Enter Student ID to update: ";
    cin >> id;

    for (int i = 0; i < count; ++i) {
        if (students[i].id == id) {
            cout << "Enter new Name: ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Enter new Department: ";
            getline(cin, students[i].department);
            cout << "Student information updated successfully!" << endl;
            return;
        }
    }

    cout << "Student with ID " << id << " not found." << endl;
}

void deleteStudent(Student students[], int& count) {
    int id;
    cout << "Enter Student ID to delete: ";
    cin >> id;

    for (int i = 0; i < count; ++i) {
        if (students[i].id == id) {
            for (int j = i; j < count - 1; ++j) {
                students[j] = students[j + 1];
            }
            --count;
            cout << "Student deleted successfully!" << endl;
            return;
        }
    }

    cout << "Student with ID " << id << " not found." << endl;
}
