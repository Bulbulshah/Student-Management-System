#include <iostream>
#include <string>
using namespace std;

// Define the Student structure
struct Student {
    int ID;
    string Name;
    float percentage;
    float GPA;
    int marks[5];
};

// Function to calculate total marks
int udf1(const Student& student) {
    int totalmark = 0;
    for (int i = 0; i < 5; i++) {
        totalmark += student.marks[i];
    }
    return totalmark;
}

int main() {
    Student student;

    // Input student details
    cout << "Enter Student Details:" << endl;
    cout << "Enter Student ID: ";
    cin >> student.ID;
    cin.ignore(); // Clear the input buffer before using getline
    cout << "Enter Student Name: ";
    getline(cin, student.Name);
    cout << "Enter Student Percentage: ";
    cin >> student.percentage;
    cout << "Enter Student GPA: ";
    cin >> student.GPA;
    cout << "Enter Student Marks (5 subjects):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> student.marks[i];
    }

    // Print student details
    cout << "\nSTUDENT DETAILS:" << endl;
    cout << "ID: " << student.ID << endl;
    cout << "Name: " << student.Name << endl;
    cout << "Percentage: " << student.percentage << "%" << endl;
    cout << "GPA: " << student.GPA << endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << student.marks[i] << " ";
    }
    cout << endl;

    // Calculate and print total marks
    cout << "Total Marks: " << udf1(student) << endl;

    return 0;
}
