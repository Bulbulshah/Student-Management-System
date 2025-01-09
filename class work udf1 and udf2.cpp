#include <iostream>
#include <string>

using namespace std;

// Structure to store student data
struct Student {
    int id;
    int marks;
    string name;
};

// Function to find the student with the minimum marks
Student udf1(Student students[], int n) {
    Student minStudent = students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks < minStudent.marks) {
            minStudent = students[i];
        }
    }
    return minStudent;
}

// Function to get the second student's details
Student udf2(Student students[], int n) {
    if (n > 1) {
        return students[1];
    } else {
        cerr << "Error: Less than 2 students available.\n";
        exit(EXIT_FAILURE);
    }
}

int main() {
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    if (n < 1) {
        cerr << "Error: Number of students must be at least 1.\n";
        return 1;
    }

    // Array to store student data
    Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i + 1 << " (ID Marks Name): ";
        cin >> students[i].id >> students[i].marks;
        cin.ignore(); // To ignore leftover newline from previous input
        getline(cin, students[i].name);
    }

    // Find the student with minimum marks
    Student minStudent = udf1(students, n);
    cout << "\nStudent with minimum marks:\n";
    cout << "ID: " << minStudent.id << ", Marks: " << minStudent.marks << ", Name: " << minStudent.name << endl;

    // Get details of the second student
    if (n > 1) {
        Student secondStudent = udf2(students, n);
        cout << "\nDetails of the second student:\n";
        cout << "ID: " << secondStudent.id << ", Marks: " << secondStudent.marks << ", Name: " << secondStudent.name << endl;
    } else {
        cout << "\nNot enough students to retrieve the second student's details.\n";
    }

    return 0;
}
