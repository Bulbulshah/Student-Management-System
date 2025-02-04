#include<iostream>
using namespace std;
int main()
{
	int num,original,rem,result=0,n=0;
	cout<<"Enter a number: ";
	cin>>num;
	original=num;
	while(original!=0)
	{
		original/=10;
		n++;
	}
	original=num;
	while(original!=0)
	{
		rem=original%10;
	    int power=1;
		for(int i=0;i<n;i++)
		{
		power*=rem;
		}
		result+=power;
		original/=10;
		}
		if(result==num)
		{
		cout<<num<<" is an Armstrong number."<<endl;
		}
		else
		{
		cout<<num<<" is not an Armstrong number."<<endl;
		}
	return 0;
}