using namespace std;
#include<iostream>

class lower 
{
    int a[3][3],i,j;
    public:
    void input()
    {
        cout<<"Enter Elements value : ";
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(i < j)
                {
                    a[i][j]=0;
                    cout<<a[i][j]<<" ";
                }
                else 
             {
                 cout<<a[i][j]<<" ";
             }
            }
            cout<<"\n";
        }
    }
    
};

int main()

{
    
}
