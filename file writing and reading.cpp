#include<iostream>
#include<fstream>

using namespace std;

int main(){
	//writing file
	ofstream outFile("example.txt");
	if(!outFile){
		//check if file was successfully created
		cout<<" Error: unable to open file for writing "<<endl;
		return 1;
	}
	outFile <<" hello File Handling in C++ "<<endl;
	outFile <<" this is a simple example "<<endl;
	outFile.close(); //close the file after writing 
	
	//Reading from a file 
	ifstream inFile("example.txt"); //open the file for reading
	if(!inFile){
		//check if the file was successfully openend
		cout<<" Error: unable to open file for reading."<<endl;
		return 1;
	}
	string line;
	cout<<" Reading from the file : "<<endl;
	while(getline(inFile,line)){
		//read file line by line
		cout<<line<<endl;
	}
	inFile.close(); //close the file after reading
	return 0;
}