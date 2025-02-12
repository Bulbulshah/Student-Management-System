#include<iostream>
using namespace std;
//void table(int arry[5]){
//	for(int i = 0 ; i<5 ; i++){
//		cout<<" Multiplication  table of  " << arry[i] <<endl;
//		for(int j = 1 ; j<=10 ; j++){
//			cout<<arry[i] << " * " << j << " = " << arry[i]*j<<endl;
//		}
//	}
//}
//int main(){
//	int arry[5];
//	cout<<" Enter the Elements of the arry "<<endl;
//	for(int i = 0 ; i<5 ; i++){
//		cin>>arry[i];
//	}
//	table(arry);
//}

int arry[10] = { 1,2,3,4,5,6,7,8,9,10};
bool Isprime(int num){
	if(num<=1)
	return false;
	for(int i =2 ; i<=num/2; i++){
		if(num%2==0){
			return false;
		}
	}
	return true;
}

int Sum(){
	int sum = 0;
	for(int i = 0 ; i<10;i++){
		if(Isprime(arry[i])){
			sum += arry[i];
		}
	}
	return sum;
}

int main(){
	cout<<" The total sum is "<<Sum();
	return 0;
}