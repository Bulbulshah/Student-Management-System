#include<iostream>
#include<math.h>
using namespace std;

void udf(int table){
	for(int i = 1 ; i<=10 ; i++){
		cout<<table << " * " << i << " = " << table*i<<endl;
	}
}

void udf(int a , int b , int c){
	float sum = 0;
	a = pow(a,2);
	b = pow(b,2);
	c = pow(c,2);
	sum += a+b+c;
	cout<<" Sum of Square" <<" "<< sum;
}
float udf(float e , float f ,float g ,float h){
	float avg;
	avg = (e+f+g+h)/4;
	return avg;
}

template <typename T>
T calculateSum(T a, T b, T c){
	return a+b+c;
}

template <typename T>
T calculateAvg(T a, T b, T c){
	return (a+b+c)/3;
}
int main(){
	int num;
	float a = 3.5;
	float b = 8.5;
	float c = 5.5;
	
	
	
	cout<<" enter your number for table "<<endl;
	cin>>num;
	udf(num);//function calling
	udf(a,b,c);
	cout<<endl;
	cout<<" total average is : "<<udf(5.5,8.6,9.7,3.6)<<endl;
	
	int int1 = 23 , int2 = 40 , int3 = 32;
	cout<<" Total sum is "<< calculateSum(int1,int2,int3);
	cout<<endl;
	cout<<" average is "<<   calculateAvg(int1,int2,int3);
	cout<<endl;
	float fl1 = 23.5, fl2 = 40.5 , fl3 = 32.5;
	cout<<" Total sum is "<< calculateSum(fl1,fl2,fl3);
	cout<<endl;
	cout<<" average is "<<   calculateAvg(fl1,fl2,fl3);
	
	return 0;
}