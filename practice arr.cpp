#include<iostream>
using namespace std;

int main(){
	int arr[] = { 5 , 3 , 8 , 1 ,2};
	int n = 5/arr[0];
	
	for ( int i =0 ;i < n ; i++){
		cout<< arr[i] <<" ";
	}
	return 0;
}