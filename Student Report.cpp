#include <iostream>
#include <string>
using namespace std;

// Define the Student structure
struct Student {
    string name;
    int rollNumber;
    float marks[3];
};

// Function declarations
void addStudent(Student &s);
float calculateTotalMarks(const Student &s);
void displayStudent(const Student &s);

int main() {
    Student student;  // Declare a Student object
    
    cout << "Adding a Student" << endl;
    addStudent(student);  // Add student details
    cout << "Student details added successfully!" << endl << endl;
    
    cout << "Displaying a Student" << endl;
    displayStudent(student);  // Display the student's details
    
    return 0;
}

// Function definitions
void addStudent(Student &s) {
    cout << "Enter Name: ";
   
    getline(cin, s.name);  // Read name with spaces
    cout << "Enter Roll Number: ";
    cin >> s.rollNumber;
    cin.ignore();  // Clear buffer after reading roll number
    cout << "Enter Marks for 3 subjects: ";
    for (int i = 0; i < 3; i++) {
        cin >> s.marks[i];
    }
}

float calculateTotalMarks(const Student &s) {
    float total = 0;
    for (int i = 0; i < 3; i++) {
        total += s.marks[i];
    }
    return total;
}

void displayStudent(const Student &s) {
    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: ";
    for (int i = 0; i < 3; i++) {
        cout << s.marks[i] << " ";
    }
    cout << endl;
    cout << "Total Marks: " << calculateTotalMarks(s) << endl;
}
