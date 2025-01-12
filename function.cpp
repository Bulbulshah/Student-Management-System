#include<iostream>
#include<cmath>
using namespace std;

void sum_Square(int , int ); //function declare
int main(){
	int num1, num2;
	cout<<" Enter the numbers "<<endl;
	cin>>num1 >> num2;
	
	sum_Square(num1 , num2 ); //function call
	return 0;
}
void sum_Square(int x , int y ){ //function define
	int ans;
	ans = pow(x,2) + pow(y ,2);
	cout<<"Sum is : "<<ans;
}