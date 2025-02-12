#include <iostream>
#include <cmath>  // For pow function
using namespace std;

// Function to compute square of three numbers and return their product
double UDF1(int a, int b, int c) {
    double ab = UDF2(a);
    double bc = UDF2(b);
    double cd = UDF2(c);
    
    return UDF3(ab, bc, cd);
}

// Function to return square of a number
double UDF2(int x) {
    return pow(x, 2);
}

// Function to multiply three numbers
double UDF3(double num1, double num2, double num3) {
    return num1 * num2 * num3;
}

int main() {
    int a, b, c;
    
    // Taking user input
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    cout << "Enter value for c: ";
    cin >> c;
    
    // Displaying result
    cout << "The final product is: " << UDF1(a, b, c) << endl;
    
    return 0;
}
