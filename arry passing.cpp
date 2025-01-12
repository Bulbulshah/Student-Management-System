#include<iostream>
using namespace std;

void position(int , int[], int);
int main(){
	int num , arry[7] = {7 , 8 , 1 , 5 , 9 , 3 , 6};
	cout<<" enter the number "<<endl;
	cin>>num;
	position(num , arry, 7);
	return 0;
}
void position(int x , int arry[], int size){
	int position = -1;
	for(int i = 0 ; i<size ; i++){
		if ( x == arry[i]){
			position=i;
			break;
		}
	}
	if(position != -1){
	cout<<" position found at : "<<position<<endl;
	}else{
		cout<<" position not found "<<endl;
	}
}