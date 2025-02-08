#include<iostream>
using namespace std;

int main(){
	int num1 , num2;

	
	cout<<" Enter first number"<<endl;
	cin>> num1 ;
	cout<<" Enter Second number "<<endl;
	cin>>num2;
	cout<<" Even Count "<<endl;
	
	for(int i = num1 ; i<=num2 ; i++){
		if(i%2==0){
			cout<<" " <<i;
		}
	}
	cout<<endl;
	int product = 1;
	for(int j = num1 ; j <= num2 ; j++){
		if(j%2!= 0 ){
			product = j*product;
		}
		
	}
	cout<<" Odd number Product is " << product <<endl;
	return 0;
}
