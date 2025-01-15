#include<iostream>
using namespace std;
int main(){
	int number , positive_count = 0 , negative_count = 0;
	cout<<" Enter Your Numbers : "<<endl;

	while(true){
			cin>>number;
		if(number == 0){
			break;
		}
	
		if(number < 0){
			negative_count++;
		}else{
			positive_count++;
		}
}
	
	cout<<" Positve Counts Are : "<<positive_count<<endl;
	cout<<" Negative counts are : "<<negative_count<<endl;
	return 0;
}