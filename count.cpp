#include<iostream>
using namespace std;

int main(){
	int num , positiveCount = 0 , negativeCount = 0 ;
	
	while(true){
		cout<<" Enter Your number "<<endl;
		cin>> num;
		
		if(num==0){
			break;
		}
		
		if(num > 0){
			positiveCount++;
		}
		else if(num < 0){
			negativeCount++;
		}
	}
	cout<<" Positive Count are "<<positiveCount << endl;
	cout<<" Negative Count are " <<negativeCount << endl;
	
	return 0; 
}