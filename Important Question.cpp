#include<iostream>
#include<string>
using namespace std;

// Structure to store student data
struct data {
    int id;
    int marks[5];
    char name[30];
};
//function1 decleration
void func1(data);
//function2 decleration
int	func2(int);

int main(){
	int i;
	struct data std1;
	cin >>std1.id;
	cin>>std1.name;
	for(i=0; i<=4; i++){
		cin>>std1.marks[i];
	}
	
	func1(std1);
	return 0;
}
void func1(data xyz){
	// Function to find the student with the minimum marks
	int min , i;
	cout<<xyz.id;
	min=xyz.marks[0];
    for (int i = 1; i < 4; i++) {
        if(min>xyz.marks[i]){
		
        min=xyz.marks[i];
    }
    cout<<func2(min);
    
    }
}
int func2(int x ){ //body of udf 2
	int ans;
	data abc= { 20 ,{78,35,67,89,100},"Bulbul"};
	ans=x+abc.marks[4];
	return(ans);
	
}
	
