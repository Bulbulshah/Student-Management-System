#include<iostream>
using namespace std;

struct Student{
	int ID;
	string Name;
	float CGpa;
	int mark[5];
};
Student globalStudent{
	608, " Akber Ali " , 3.2 , {40,67,89,67,40}
};

void Studentinfo(Student S1, Student S2){
	cout<<" Student 1 Info "<<endl;
	cout<<" ID " << S1.ID<<endl;
	cout<<" Name " <<S1.Name<<endl;
	cout<<" CGpa " << S1.CGpa<<endl;
	cout<<" Total MArks"<<endl;
	for(int i =0 ; i<5 ; i++){
		cout<<" Marks " <<S1.mark[i] <<endl;
	}
	cout<<" Student 2 Info "<<endl;
	cout<<" ID "<< S2.ID<<endl;
	cout<<" Name " << S2.Name<<endl;
	cout<<" CGpa "<< S2.CGpa<<endl;
	cout<<" total Marks "<<endl;
	for(int i = 0 ; i< 5 ; i++){
		cout<<" Marks " <<  S1.mark[i]<<endl;
	}

}
int main(){
	Student localstudent{
	609, " Bulbul shah " , 3.4, {60,70,78,90,55}
	};
	Studentinfo(globalStudent , localstudent);
	return 0;
}
