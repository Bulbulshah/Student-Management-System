#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	cout<<"Enter your text here "<<endl;
	getline(cin,input);
	
	int UpperCount = 0 , LowerCount = 0 , specialChar = 0;
	for(int i = 0; input[i] != '\0'; i++){
		if(input[i] >= 'A' && input[i] <= 'Z'){
			UpperCount++;
		}else if(input[i] >= 'a' && input[i] <= 'z'){
			LowerCount++;
		}
		else if (!UpperCount && !LowerCount ) {
			specialChar++;
		}
	}
	cout<<" Upper counts are : "<<UpperCount<<endl;
	cout<<" Lower counts are : "<<LowerCount<<endl;
	cout<<" Special characters are : "<<specialChar<<endl;
	return 0;
}