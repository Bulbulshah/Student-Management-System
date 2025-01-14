#include<iostream>
#include<string>
using namespace std;

struct Student{
	int age;
	string name;
	int marks;
};
int main(){
	Student S1;
	cout<<" Enter your Age "<<endl;
	cin>>S1.age;
	
	cout<<" Enter Your Name "<<endl;
	cin>>S1.name;
	
	cout<<" Enter Your Marks "<<endl;
	cin>>S1.marks;
	
	
	
	
		
	return 0;
}