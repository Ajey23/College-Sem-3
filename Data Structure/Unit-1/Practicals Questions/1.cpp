// Write a program that will display array in reverse order.
//SWAPPING

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    //considering an array of size n
    //give input as elements
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Before swapping "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\nAfter swapping "<<endl;
    for(int i=n-1; i>=0; i--)       // Logic for swapping
    {
        cout<<a[i]<<" ";
    }
}