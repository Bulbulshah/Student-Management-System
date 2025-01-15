#include<iostream>
using namespace std;

int main(){
	int num1 , num2 , product = 1;
	cout<<" Enter First Number "<<endl;
	cin>>num1;
	cout<<" Enter Second Number "<<endl;
	cin>>num2;
	
	for (int i = num1 ; i <= num2 ; i++){
		if ( i % 2 == 0 ){
			cout<<i<< " "<<endl;
			
		}
	}
	for (int j = num1 ; j<=num2 ; j++){
		if ( j % 2 != 0){
		product = product * j;
			
		}
	
	}
	cout<<" THE PRODUCT OF ODD NUMBER ARE "<<" "<<endl;
	cout<<product;
	return 0;
}