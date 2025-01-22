#include <iostream>
using namespace std;

int main() {
	 const int* ptr;
	int x  = 10;
	int y = 20;
	ptr = &x;
	cout<<*ptr;
	ptr = &y;
	cout<<*ptr ;
	
	return 0;
}


