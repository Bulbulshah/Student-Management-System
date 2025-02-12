#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<" Enter the size of an arry"<<endl;
	cin>>size;
	
	int arry1[size];
	cout<<" Enter" << size << " elements for arry  "<<endl;
	for(int i = 0 ; i<size ; i++ ){
		cin>>arry1[i];
	}
	for(int i = 0 ; i<size-1 ; i++){
		for(int j = 0 ; j<size-i-1; j++){
			if(arry1[j] < arry1[j+1]){
			
			int temp = arry1[j];
			arry1[j] = arry1[j+1];
			arry1[j+1] = temp;
		}
		}
	}
	for(int i = 0 ; i<size ; i++ ){
		cout<<arry1[i] << " ";
	}
	cout<<endl;
	return 0;
}