#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<" Enter the size of an arry "<<endl;
	cin>>size;
	
	int arry[size];
	cout<<" Enter "<<size<<" Elements for arry "<<endl;
	for(int i = 0 ; i<size ; i++){
		cin>>arry[i];
	}
	for(int i = 0 ; i<size-1 ; i++){
		for(int j = 0 ; j<size-i-1; j++ ){
			if(arry[j]>arry[j + 1]){
				int temp = arry[j];
				arry[j] = arry[j + 1];
				arry[j + 1] = temp;
			}
		}
	}
	for(int i = 0 ; i<size ; i++){
		cout<<arry[i] << " ";
	}
	return 0;
}