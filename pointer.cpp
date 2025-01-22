#include <iostream>
using namespace std;

int main() {
    int arr[5] = {3, 6, 32, 2, 7};
    int *p;
    p = arr; // Pointer pointing to the start of the array

    for (int i = 4; i >= 0; i--) {
        cout << *(p + i) << endl; // Access the element using pointer arithmetic
    }

    return 0;
}

//	int a , *p;
//	p = &a;
//	cout<<" Enter value of a :"<<endl;
//	cin>>a;
//	cout<<*p<<endl;
//	*p = *p+2;
//	cout<<a;