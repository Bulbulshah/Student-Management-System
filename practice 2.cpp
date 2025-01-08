#include<iostream>
#include<string>
using namespace std;

int Max_Student = 100;

struct Student{
	int ID;
	char name[30];
	string department;
	
};
Student student[100];
int totalcount = 0;

void AddStudent();
void DisplayStudent();

int main(){
	int choice;
	do{
		cout<<" Student Management System"<<endl;
		cout<<" 1. Add Student "<<endl;
		cout<<" 2. Display Student "<<endl;
		cout<<" 3. Exit "<<endl;
		cout<<" Enter From (1-3) "<<endl;
		cin>>choice;
		switch(choice){
			case 1:
			AddStudent();
			break;
			
			case 2:
			DisplayStudent();
			break;
			
			case 3:
			cout<<" Successfully Exit "<<endl;
			break;
			
			default :
				cout<<" Invalid Entry "<<endl;
				break;
			
		}
	}while(choice!=3);
	return 0;
}
void AddStudent(){
	
	cout<<" Enter Your ID "<<endl;
	cin>> student[100].ID;
	cout<<" Enter Your Name "<<endl;
	cin>> student[100].name;
	cout<<" Enter Your Department "<<endl;
	cin>>student[100].department;
		totalcount++;
	cout<<" Student Add Successfully "<<endl;

}
void DisplayStudent(){
	if(totalcount==0){
		cout<<" NO Student Found "<<endl;
		return;
	}
	cout<<" List OF Student "<<endl;
	for( int i = 0; i<totalcount; i++){
		cout<<" Student "<<1+i<<endl;
	}
	
}