#include<iostream>
using namespace std;

int main(){
//	string response;
//	do{
//		cout<<"Do you Want More Chia ? ( YES / No || yes / no) "<<endl;
//		getline(cin, response);
//	}while(response != "NO" && response != "no");
	
	string chia[3] = {"Green Tea", "Orange tea" , "black tea" };
	
	for(int i = 0 ; i<3 ; i++){
		if(chia[i] == "Orange tea"){
			continue ;
		}
		cout<<"Breawing "<<chia[i] << "...."<<endl;
	}
	return 0;
}