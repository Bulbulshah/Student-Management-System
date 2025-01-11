#include<iostream>
using namespace std;

int main(){
	
//	int arry[4]= { 56, 67, 34, 89};
//	int i = 0;
//	do{
//		cout<<" the value of "<< i << " is "<< arry[i]<<endl;
//		i++;
//	}while(i<4);

	int arry[10],size, temp;
	cout<<" enter size of arry "<<endl;
	cin>>size;
	
	cout<<" Enter Elements of arry "<<endl;
	for(int i = 0 ; i<size ; i++){
		cin>>arry[i];
	}
	for(int i =0; i < size ; i++){
		for(int j = i+1 ; j<size ; j++){
			temp = arry[i];
			arry[i ] = arry [j];
			arry[j] = temp;
			
		}
	}
	cout<<" Sorted Arry Are : "<< endl;
	for(int i = 0; i < size ; i++){
		cout<<arry[i]<<endl;
	}
	return 0;
}