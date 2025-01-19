#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	cout<<"Enter your text here "<<endl;
	getline(cin,input);
	
	int UpperCount = 0 , LowerCount = 0;
	for(int i = 0; input[i] != '\0'; i++){
		if(input[i] >= 'A' && input[i] <= 'Z'){
			UpperCount++;
		}else{
			LowerCount++;
		}
	}
	cout<<" Upper counts are : "<<UpperCount<<endl;
	cout<<" Lower counts are : "<<LowerCount<<endl;
	return 0;
}