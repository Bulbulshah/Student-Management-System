#include<iostream>
using namespace std;
int main(){
	string input;
	int totalcount[256] = { 0 } ;
	cout<<" Enter your string "<<endl;
	getline(cin,input);
	
	for(int i  = 0 ; input[i] != '\0'; i++){
		totalcount[input[i]]++;
	}
	
	cout<<" count of each character is "<<endl;
	for(int i = 0 ; i<256; i++){
		if(totalcount[ i ] > 0){
			cout<<(char )i << " is " <<totalcount[ i ] << "times "<<endl;
		}
	}

	return 0;
}