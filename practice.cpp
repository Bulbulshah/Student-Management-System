#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string ID;
    string department;
};

const int MAX_STUDENT = 100;
int count = 0;
Student student[MAX_STUDENT];

void addStudent();
void DisplayStudent();

int main() {
    int choice;
    do {
        cout << "Student Management System:\n";
        cout << "1. Add Student" << endl;
        cout << "2. Display Student" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Your Choice From (1 to 3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                DisplayStudent();
                break;

            case 3:
                cout << "Exiting Program" << endl;
                break;

            default:
                cout << "Invalid Choice, Try Between (1 to 3)" << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}

void addStudent() {
    if (count >= MAX_STUDENT) {
        cout << "Cannot add more students. Maximum limit reached!" << endl;
        return;
    }

    cin.ignore(); // Clear the input buffer before using getline
    cout << "Enter Student Name: ";
    getline(cin, student[count].name);

    cout << "Enter Your ID: ";
    getline(cin, student[count].ID);

    cout << "Enter Your Department: ";
    getline(cin, student[count].department);

    count++;
    cout << "Student added successfully!" << endl;
}

void DisplayStudent() {
    if (count == 0) {
        cout << "No students to display." << endl;
        return;
    }

    cout << "List of Students:" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << student[i].name << endl;
        cout << "ID: " << student[i].ID << endl;
        cout << "Department: " << student[i].department << endl;
        cout << endl;
    }
}
