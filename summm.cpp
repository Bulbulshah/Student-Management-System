#include<iostream>
using namespace std;
int main(){
	int num , sum = 0 , product=1 ;
	cout<<" Enter your number "<<endl;
	cin>>num;
	int i = 1;
	while(i<=num){
	product = i * i;
		cout<<i << " * " << i << " = " << product <<endl;
		sum = sum + product;
		i++;
	}
	cout<<" total Sum is "<< sum ;
	return 0;
}