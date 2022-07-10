//2d array

#include<iostream>
using namespace std;
int main()
{
    int a[2][2];
    int i,j;

    for(i=0; i<2; i++) //for rows
    {
        for(j=0; j<2; j++) //for column
        {
            cout<<"Enter Elements";
            cin>>a[i][j];
        }
    }
}