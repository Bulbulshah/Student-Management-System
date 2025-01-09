#include <iostream>
#include <string>
using namespace std;

struct student {
    int id;
    string name;
    int marks[5];
};

// Function prototypes
void udf1(student);
int udf2(int);

int main() {
    student s1;

    // Input details for student
    cout << "Enter your id: ";
    cin >> s1.id;
    cin.ignore(); // To ignore leftover newline character from `cin`
    cout << "Enter your name: ";
    getline(cin, s1.name);

    for (int i = 0; i < 5; i++) {
        cout << "Enter your marks " << i + 1 << " : ";
        cin >> s1.marks[i];
    }

    // Call udf1 function to process student details
    udf1(s1);

    return 0;
}

void udf1(student xyz) {
    int min = xyz.marks[0];

    // Finding the minimum mark
    for (int i = 1; i < 5; i++) { // Ensure all 5 marks are checked
        if (min > xyz.marks[i]) {
            min = xyz.marks[i];
        }
    }

    cout << "\nYour ID: " << xyz.id << endl;
    cout << "Your Name: " << xyz.name << endl;
    cout << "Minimum Marks: " << min << endl;

    // Calculate maximum using udf2
    int max = udf2(min);
    cout << "Maximum (calculated in udf2): " << max << endl;
}

int udf2(int x) {
    student abc = {15, "Ali", {54, 67, 45, 87, 23}};
    int ans = x + abc.marks[3]; // Adding the 4th mark (index 3) of `abc` to x
    return ans;
}
