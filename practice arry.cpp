//#include<iostream>
//using namespace std;
//
//int max_num(int[], int);
//int main(){
//	int arry[10];
//	
//	cout<<" Enter numbers "<<endl;
//	for(int i = 0; i<10 ; i++){
//		cin>>arry[i];
//	}
//	cout<<" maximum number is "<<max_num( arry, 10);
//	
//	return 0;
//}
//int max_num(int arry[], int size){
//	int max = arry[0];
//	for(int i = 0 ; i<size ; i++){
//		if(arry[i] > max){
//			max = arry[i] ;
//		}
//	}
//	return max;
//}
#include<iostream>
using namespace std;
int Max_num(int[], int);
int main(){
	int arry[5];
	
	cout<<" Enter Elements of Arry "<<endl;
	for(int i = 0 ; i<5; i++){
		cin>>arry[i];
	}
	cout<<" Maximum Number is "<< Max_num(arry, 5);
	return 0;
}
int Max_num(int arry[], int size){
	int max = arry[0];
	for(int i = 0 ; i<size ; i++){
		if(arry[i]>max){
			max = arry[i];
		}
	}
	return max;
}