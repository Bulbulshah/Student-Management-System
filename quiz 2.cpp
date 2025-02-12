#include <iostream>
using namespace std;

// Function to calculate string length without using built-in functions
int length(char str[]) {
    int count = 0;
    while (str[count] != '\0') {  // Loop until null terminator
        count++;
    }
    return count;
}

// Function to take string input and pass it to length()
void stringFunction() {
    char str[100]; // Declare a character array (string)
    
    cout << "Enter a string: ";
    cin.getline(str, 100);  // Taking input including spaces
    
    
    
    cout << "Length of the string is: " << length(str) << endl;
}

int main() {
    stringFunction();  // Call the UDF function
    return 0;
}
