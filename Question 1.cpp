#include<iostream>
using namespace std;

int main(){
	int n , i = 1 , sum = 0 , product;
	cout<<" Enter any number "<<endl;
	cin>>n;
	while(i<n){
		product = i*i;
		cout<< i << " * " << i << " = " << product<<endl;
		sum = sum + product;
		
		i++;
	}
	cout<< " the total sum is : "<<sum <<endl;
	return 0;
}