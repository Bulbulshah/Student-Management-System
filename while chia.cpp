#include<iostream>
using namespace std;

//int main(){
//	int cupTea;
//	cout<<"Enter Cup of tea"<<endl;
//	cin>>cupTea;
//	
//	while(cupTea>0){
//		cout<<" Tea Serve " << endl;
//		cout<< cupTea << " Remaining "<<endl;
//		cupTea--;
//	}
//	cout<<" All Cup of Tea Serve "<<endl;
//	
//	return 0;
//}

int main(){
	int CupTea;
	cout<<" Enter Cup of TEa for Serve "<<endl;
	cin>>CupTea;
	
	for(int i = 1 ; i<=CupTea ; i++){
		cout<<" Tea Serve "<<endl;
		cout<< CupTea -i << " Remaining "<<endl;
	}
	cout<<" All TEA Serve "<<endl;
	
	return 0;
}