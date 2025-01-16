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


//{{{{{{{{{{{{functions }}}}}}}}}}}
//int add(int ,int);
//int main(){
//	int result = add( 5 , 6);
//	cout<<" Sum : "<<result <<endl;
//	return 0;
//}
//int add(int a, int b){
//	return a + b ;
//}

int checkEvenOdd(int);
int main(){
	int num = 6;
	if ( checkEvenOdd(num))
	cout<< num << " is Even "<<endl;
	else
	cout<< num << " is odd "<<endl;
	return 0;
}
int checkEvenOdd(int num){
	if(num % 2 == 0)
	return 1;
	else
	return 0;
}
