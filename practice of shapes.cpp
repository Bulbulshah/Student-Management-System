#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<" Enter Your Number "<<endl;
	cin>>num;
	
	for (int i = num ; i>=1 ; i-- ){
		for(int j = i ; j>=1 ; j--){
			cout<<"  " << j;
			
		}
		cout<<endl;
	}
}