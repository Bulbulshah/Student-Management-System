#include<iostream>
using namespace std;

int main(){
//	int a = 5;
//	cout<<a++<<endl;
//	cout<<--a<<endl;
//	cout<<++a<<endl;
//	cout<<a++<<endl;
//	cout<<a--<<endl;

	int miles, kilometer , meter , centimeter , milimeter, micrometer  ;
	cout<<" Enter Your Distance in miles "<<endl;
	cin>>miles;
	kilometer = miles * 1.60934;
	meter = kilometer * 1000;
	centimeter = meter * 100;
	milimeter = centimeter * 1000;
	micrometer = milimeter * 1000;
	
	cout<<" Kilometer : "<<kilometer<<endl;
	cout<<" Meter : "<<meter<<endl;
	cout<<" centimeter: "<<centimeter<<endl;
	cout<<" milimeter : "<<milimeter<<endl;
	cout<<" micrometer : "<<micrometer<<endl;
	
	return 0;
}