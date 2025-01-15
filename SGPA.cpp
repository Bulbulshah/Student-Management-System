#include<iostream>
using namespace std;

int main(){
	int credit_hours , Grade_point , total_SE_CR_H = 0;
	float  SGPA;
//	SGPA= sum of (Cr. Hours of the course x GP earned of that course)/total semester Cr.H
	cout<<" Enter Credit Hours of 5 Subjects "<<endl;
	cin>>credit_hours;
	total_SE_CR_H = credit_hours;
	cout<<" Enter GD "<<endl;
	cin>>Grade_point;
	SGPA =  Grade_point /total_SE_CR_H;
	cout<<" Your SGPA is : " <<SGPA;
	return 0;
}