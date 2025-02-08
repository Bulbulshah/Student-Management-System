#include<iostream>
using namespace std;

int main(){
	int rows;
	cout<<" Enter Number of rows "<<endl;
	cin>> rows ;
	for(int i = rows ; i>=1 ; i--){
		for(int j = i ; j>=1 ; j--){
			cout<< i;
		}
		cout<<endl;
	}
	return 0;
}
