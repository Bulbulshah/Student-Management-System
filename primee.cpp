#include<iostream>
using namespace std;
int arr[10] = { 2 , 4 , 6 ,7 , 5 ,9 , 1 , 20 , 5 ,4};
bool isprime(int num){
	if(num <= 1)
	return false;
	for(int i = 2 ; i <= num/2 ; i++){
		if(num%i==0)
		return false;
		
	}
	return true;
}

int Sum(){
	int sum = 0;
	for(int i= 0 ; i<10; i++){
		if(isprime(arr[i])){
			sum +=arr[i];
		}
		
	}
	return sum;
}
int main(){
	cout<<" THe prime sum is "<<Sum();
	return 0;
}