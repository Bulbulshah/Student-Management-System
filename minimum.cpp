#include<iostream>
#include<string>

using namespace std;

struct Student{
	string name;
	int ID;
	int marks[5];
};
Student udf1(Student);
int udf2(int);
int main(){
	
	Student Stud1;
	int i;
	cout<<" Enter Your Name "<<endl;
	getline(cin,Stud1.name);
	cout<<" Enter Your ID "<<endl;
	cin>>Stud1.ID;
	for(int i=0; i<5; i++){
		cout<<" Enter Your Marks : "<<i+1<<endl;
		cin>>Stud1.marks[i];
		
		
	}
	Stud1 = udf1(Stud1);
	int max = udf2(min);
	return 0;
}
Student udf1(Student xyz){
	int min = xyz.marks[0];
	for(int i =1 ; i<5 ; i++){
		if(min > xyz.marks[i]){
			min = xyz.marks[i];
		}
	}
	cout<<" Your ID IS : "<<xyz.ID<<endl;
	cout<<" Your name is "<<xyz.name<<endl;
	cout<<" Minimum Number is "<<min;
}
int udf2(int abc){
	
	Student x = {"BulBul", 121 , {45,65,34,23,89}};
	int ans = abc+ x.marks[4];
	return ans;
}