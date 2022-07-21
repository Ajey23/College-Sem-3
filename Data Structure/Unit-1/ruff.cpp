//write a program to print an array in reverse order
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of elements ";
	cin>>n;
	int a[n];
	//suppose we have n number of elements
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Entered element is ";
	for(int i=0; i<n; i++)
	{
		cout<<a[i];
	}
	cout<<"Array in reverse order ";
	for(int i=n; i>=0; i--)
	{
		cout<<a[i];
	}
}