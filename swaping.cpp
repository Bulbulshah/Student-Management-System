#include<iostream>
using namespace std;
int main(){
	int arry[ ] = { 1, 5  , 9 , 3 , 8};
	int n = sizeof(arry) / sizeof(arry[0]);
	for(int i = 0 ; i<n-1 ; i++){
		for( int j = 0 ; j<n-i-1; j++){
			if(arry[j] < arry[j+1]){
				int temp = arry[j];
				arry[j] = arry[j+1];
				arry[j+1] = temp;
			}
		}
		
	}
	for(int i = 0 ; i<n ; i++){
	
		
			cout<<arry[i];
		
}
	return 0;
}