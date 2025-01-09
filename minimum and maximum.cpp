#include <iostream>
#include <string>
using namespace std;

struct student udf1(student xyz);
int udf2(int x);

struct student{
	int id;
	string name;
	int marks[5];
};

int main (){
	student s1;
	cout<<"Enter you id: ";
	cin>>s1.id;
	cout<<"Enter you name: ";
	cin>>s1.name;
	for(int i=0;i<5;i++){
		cout<<"Enter your marks "<<i+1<<" : ";
		cin>>s1.marks[i];
	}
	udf1(s1);
	return 0;
}
 struct student udf1(student xyz){
	int min;
	cout<<"Your id: "<<xyz.id<<endl;
	min=xyz.marks[0];
	for(int i=1;i<4;i++){
		if(min>xyz.marks[i]){
			min=xyz.marks[i];
		}
	}
	cout<<"Minimum :"<<min;
	cout<<"Maximum "<<udf2(min);
};

int udf2(int x){
	int ans;
	student abc={15,"Ali",{54,67,45,87,23}};
	ans=x+abc.marks[4];
	return(ans);
}