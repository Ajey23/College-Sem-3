#include<iostream>
using namespace std;
int main()
{
    int row,col,r,c;
    int Matrix[10][10];

    cout<<"Enter the no. of Rows : ";
    cin>>row;
    cout<<"Enter the no. of Columns : " ;
    cin>>col;

    cout<<"Enter the elements : \n";
    for(r=0; r<row; r++)
    {
        for(c=0; c<col; c++)
        {
            cin>>Matrix[r][c];
        }
    }

    cout<<endl;
    cout<<"The Upper Triangular Matrix :\n";
    for(r=0; r<row; r++)
    {
        cout<<"\n";
            for(c=0; c<col; c++)
            {
                if(r>c)
                {
                    cout<<"0"<<" ";
                
                }
                else
                {
                    cout<<Matrix[r][c] << " ";
                }
            }
    }
}
