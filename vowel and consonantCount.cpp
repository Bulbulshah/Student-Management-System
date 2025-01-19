#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string input;
	cout<<" Enter your text here "<<endl;
	getline(cin,input);
	int vowelCount = 0 , notVowel = 0;
	
	for (int i = 0 ; input[i] != '\0';i++){
		 
		 
		if( input[i]== 'A' || input[i]== 'E' || input[i]== 'I' || input[i]== 'O' || input[i]== 'U' ||
		input[i]== 'a' ||input[i]== 'e' ||input[i]== 'i' ||input[i]== 'o' ||input[i]== 'u' ){
			vowelCount++;
		}else{
			notVowel++;
		}
	
	}
	cout<<" vowels are : "<<vowelCount<<endl;
	cout<<" not vowels are : "<<notVowel<<endl;
	
	return 0;
}