//write a program that will display array in reverse order.

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter array of elements : ";
	cin>>n;
	int a[n];
	//consider n as user input value
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	cout<<"Before swapping ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}

	cout<<"After swapping ";
	for(int i=n; i>=0; i--)
	{
		cout<<a[i]<<" ";
	}
}