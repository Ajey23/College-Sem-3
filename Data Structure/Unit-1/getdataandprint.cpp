//Program to get data from user and print 

#include<iostream>
using namespace std;
class identity
{
    public:
    int a[3][3],i,j;
    void getdata()
    {
        cout<<"Enter Value : ";
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void putdata()
    {
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                cout<<a[i][j];
            }
        }
    }
    void print()
    {
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(i==j)
                {
                    a[i][j]=1;

                }
                else
                {
                    a[i][j]=0;
                }
            }
            cout<<"\n";
        }
    }
};
int main()
{
    identity i1;
    i1.getdata();
    i1.putdata();
    i1.print();

    return 0;
}