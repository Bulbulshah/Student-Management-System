#include<iostream>
using namespace std;

int main(){
	int num ,i = 1, sum = 0 , product; 
	cout<<" Enter Your Number "<<endl;
	cin>>num;
	
	while(i<=num){
		product = i * i;
		cout<< i <<" * " << i << " = " << product <<endl;
		sum = sum + product ;
		i++; 
	}
		cout<<" Total Sum Is : "<< sum <<endl;
	return 0;
}