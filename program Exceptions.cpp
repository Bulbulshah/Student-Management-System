#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	int num1, num2, sum;
	cout<<" Enter first number "<<endl;
	if(!(cin>> num1 )){
	throw " input is not integer ";
	}
try{//exceptional handling 
	
	cout<<" Enter second number"<<endl;
		if(!(cin>> num2)) {
	throw " input is not integer ";
	}
	
	sum = num1 + num2;
	cout<<" The Sum of "<< num1 <<" + "<< num2 << " = "<< sum <<endl;
	
}catch (const char* e){

	cout<<" Exception : "<<e<<endl;
}
ofstream outFile (" Calculation_result.txt", ios::app);
if(!outFile){
	cout<<" Error : Unable to open file for saving results . "<<endl;
	return 1;
}
	outFile << " the Sum of "<<num1<< " and "<< num2 << " is "<<sum<<endl;
	outFile.close();
	cout<<" Result saved to 'Calculation_result.txt'."<<endl;
	
	return 0;
}