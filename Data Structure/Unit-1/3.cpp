#include<iostream>
using namespace std;

void representation(int column, int matrix[][3])
{
    int tripletRepresentationMatrix[3][column];
    int r,c,count=0;

    for(r=0; c<3; c++)
    {
        for(c=0; c<3; c++)
        {
            if(matrix[r][c] !=0)
            {
                tripletRepresentationMatrix[0][count] = r;
                tripletRepresentationMatrix[1][count] = c;
                tripletRepresentationMatrix[2][count] = matrix[r][c];
                count++;
            }

        }
    }
    cout<<"\nTriplet Representation of sparse matrix is : ";
    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            cout<<tripletRepresentationMatrix[r][c];
        }
        cout<<"\n";

    }
}
int main()
{
    int sparse[3][3] ={{2,3,0}, {0,3,0}, {0,0,3}};
    int r, c, counterForNonZeroValue=0;

    for(r=0; r<3; r++)
    {
        for(c=0; c<3; c++)
        {
            if(sparse[r][c] !=0)
            {
                counterForNonZeroValue++;
            }
        }
    }
    if(counterForNonZeroValue<5)
    {
        cout<<"\nThe matrix is sparse matrix";
        representation(counterForNonZeroValue,sparse);
    }
    else
    {
        cout<<"\nThe matrix is not sparse matrix";
    }
}

    