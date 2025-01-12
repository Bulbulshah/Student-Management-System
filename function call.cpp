#include<iostream>
#include<cmath>
using namespace std;

int sum_Square(int , int);  //function declaration
int main(){
	int num1 , num2;
	cout<<" Enter the First number "<<endl;
	cin>>num1;
	
	cout<<" Enter the second  number "<<endl;
	cin>>num2;
	
	cout<< " Sum is : "<< sum_Square(num1 , num2); //function call
	
	return 0;
}
int sum_Square(int x , int y){ //function defination
	int ans;
	ans = pow(x,2) + pow(y , 2); // squaring and adding them 
	return ans;
}