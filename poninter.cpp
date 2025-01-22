#include <iostream>
using namespace std;

int main() {
    int x = 10;
    * ptr = &x; // ptr stores the address of x

    cout << "Value of X is: " << x << endl;                 // Prints the value of x
    cout << "Address of x: " << &x << endl;                // Prints the address of x
    cout << "Value stored in ptr (address of x): " << ptr << endl; // Prints the address stored in ptr
    cout << "Value pointed by ptr: " << *ptr << endl;      // Prints the value at the address pointed by ptr

    return 0;
}
