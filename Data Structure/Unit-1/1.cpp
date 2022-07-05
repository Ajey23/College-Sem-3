/* Write a c++ program which check whether the given matrix is a sparse matrix or
not. Take a static matrix */

#include<iostream>
using namespace std;

int main()
{
    int R, C;
    int matrix [3][4] = {{2,0,3,0}, {2,1,4,3}, {6,0,0,0}};
    int counterForZero = 0;

    for( R=0; R<3; R++);
    {
        for( C=0; C<4; C++)
        {
            if(matrix[R][C] == 0)
            {
                counterForZero++;
            }
        }
    }
    if ( counterForZero > ((4*3)/2))
    {
        cout<<" yes it is sparce " <<counterForZero;
    }
    else
    {
                cout<<"\n NO it is sparce\n " <<counterForZero;
    }
}