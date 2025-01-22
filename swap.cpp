#include <iostream>
using namespace std;
void udf(int* x , int* y){
	int temp = 0;
	temp = *x;
	*x = *y ;
	*y = temp;
	cout<<x<<endl;
	cout<<y<<endl;
	
}

int main() {
	int x = 10 , y = 12;
	udf(&x ,&y);
	cout<<y<<endl;
	return 0;
}
