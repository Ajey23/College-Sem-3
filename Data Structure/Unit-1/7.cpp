//to count zero element in array

using namespace std;
#include<iostream>

class sparse 
{
    int a[3][3],i,j,count1,count2;
    public:
    sparse()
    {
        count1,count2=0;
    }
    void input()
    {
        cout<<"Enter Elements value : ";
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
               count1++;
            }
            else 
            {
                count2++;
            }
            cout<<a[i][j]<<" ";
        }
    }
    
                if(count>((i*j)/2))
                {
    
                    cout<<"number of zeto elment :"<<count1;
                }
                else 
             {
                 cout<<"number of non zero element:"<<count2;
             }
               cout<<"\n";
            
};

int main()
{
    sparse s1;
    s1.input();
    s1.disp();
    
    return 0;
}
