//to print reverse number in for loop 
using namespace std;
#include<iostream>
int main()
{
    int a[3][2],i,j;
    for(i=0; i<3; i++) 
    {
            for(j=0; j<2; j++) 
            {
                cin>>a[i][j];
            }

    }
     for(i=0; i<3; i++) 
    {
            for(j=0; j<2; j++) 
            {
                //b=[i][j]=a[j][i];
                //cout<<b[i][j]
                cout<<a[j][i]<<" "; //logic 
            }

    }
}