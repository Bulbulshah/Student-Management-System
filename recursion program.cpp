#include<iostream>
using namespace std;
int fact(int n){
	if(n==0 || n==1){ //base case
		return 1;
	}
	return n*fact(n-1); //recursive case
}
int main(){
	int num = 5;
	cout<< " Factorial of "<<num <<" is " <<fact(num)<<endl;
	return 0;
}