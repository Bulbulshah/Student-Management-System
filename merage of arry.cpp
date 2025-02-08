#include<iostream>
using namespace std;
int main(){
	int arr1[] = { 1 , 5 , 7};
	int arr2[]	= { 3 , 6 , 4};
	
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int size3 = size1 + size2;
	
	int arr3[size3];
	
	for(int i = 0 ; i<size1; i++){
		arr3[i] = arr1[i];
	}
	for(int i = 0 ; i<size2; i++){
		arr3[size1 + i] = arr2[i];
	}
	for(int i = 0 ; i<size3; i++){
		cout<<arr3[i]<< " ";
	}
		
	
	return 0;
}