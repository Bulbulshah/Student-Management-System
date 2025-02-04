#include<iostream>
using namespace std;
int arr[10]={11,23,4,6,19,17,12,24,31,9};
bool isPrime(int num);
int sum();

int main()
{
	cout<<"Sum of prime numbers: "<<sum()<<endl;
	return 0;
}

bool isPrime(int num)
{
	if(num<=1)
	return false;
	for(int i=2;i<=num/2;i++)
	{
	if(num%i==0)
	return false;
	}
	return true;
}

int sum()
{
	int sum=0;
	for(int i=0;i<10;i++)
	{
	if(isPrime(arr[i]))
	{
	sum+=arr[i];
	}
	}
	return sum;
}