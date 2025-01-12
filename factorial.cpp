#include <iostream>
using namespace std;
void factorialOfanumber(int n);
int main(){
	int n;
	cout << "Enter any number"<< endl;
	cin >> n;
	factorialOfanumber(n);
	return 0;
}

	long long  product = 1;{
	
	for(int i = 1; i <= n; i++){
		product *= i;
		}
		cout << "Factorial form of " << n << " is: " << product;
 		
	}