#include<iostream>
using namespace std;
//void greet();
//int main(){
//	greet();
//	return 0;
//}
//void greet(){
//	cout<<"Hello"<<endl;
//	return;//optional in void function
//}

int add(int ,int);
int main(){
	int result = add( 5 , 6);
	cout<<" Sum : "<<result <<endl;
	return 0;
}
int add(int a, int b){
	return a + b ;
}