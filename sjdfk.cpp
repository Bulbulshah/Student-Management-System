#include<iostream>
using namespace std;
int main(){
	int size ;
	cout<<" Enter the size of an arry"<<endl;
	cin>>size;
	
	int arr[size];
	
	cout<<" Enter "<<size << " elements for arry"<<endl;
	for(int i = 0 ; i<size ; i++){
		cin>>arr[i];
	}
	int minimum = arr[0];
	int maximum = arr[0];
	
	for(int i = 1 ; i<size ; i++){
		if(arr[i] < minimum ){
			minimum = arr[i];
		}
		if(arr[i] > maximum ){
			maximum = arr[i];
		}
	}
	
	cout<<" The minimum number is "<< minimum;
	cout<<" the maximu  number is "<< maximum;
	return 0;
}