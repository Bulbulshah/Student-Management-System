#include<iostream>
using namespace std;

int main(){
	int arry[6] = { 4 , 6 , 9 , 4 ,7 ,2};
	int copyarry[6];
	int sum = 0;
	for(int i = 0 ; i<=5; i++){
		copyarry[i] = arry[i];
		if(arry[i] % 2 == 0){
			sum += arry[i];
		}
	}
	cout<<"Copy Arry are " <<endl;
	for(int i = 0 ; i<= 5 ; i++){
		cout<<" " <<copyarry[i];
	}
	cout<<endl;
	cout<<" Total Sum " << sum;
	return 0;
}