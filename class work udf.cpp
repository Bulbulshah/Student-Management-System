#include<iostream>
#include<string>
using namespace std;

struct student func(void);
struct  student
	{
		int id;
		char name[20];
		float percentage;
		
	}; 
int main(){
	
	
	struct student record;
	record = func();
	cout<<" ID IS  :"<<record.id);
	cout<<" name is : ";
	puts(record.name);
	cout<<" percentage is ="<<record.percentage);
	return 0;
}
