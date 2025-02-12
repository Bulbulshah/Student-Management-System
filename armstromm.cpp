#include<iostream>
using namespace std;

int main(){
	int num , remain , sum = 0 , temp;
	
	cout<<" Enter your number "<<endl;
	cin>>num;
	
	temp = num;
	
	while(num != 0 ){
		remain = num%10;
		sum += remain*remain*remain;
		num = num/10;
	}
	if(sum==temp){
		cout<<" Armstrom number "<<endl;
	}else{
		cout<<" not an armstrom number "<<endl;
	}
	return 0;
}