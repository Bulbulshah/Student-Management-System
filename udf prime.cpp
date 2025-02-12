#include<iostream>
using namespace std;
int arry[10] = { 2 , 4 , 6 ,7 , 5 ,9 , 1 , 20 , 5 ,4};
bool Isprime(int num){
	if(num<=1)
		return false ;
	
	for(int i = 2 ; i <= num/2 ; i++){
		if(num%i==0)
			return false;
		
	}
	return true;
}
int Sumprime(){
	int sum =0;
	for(int i =0 ; i<10 ; i++){
		if(Isprime(arry[i])){
			sum+=arry[i];
		}
	
	return sum;
}
int main(){
	cout<<" Sum of prime number are "<< Sumprime();
	return 0;
}