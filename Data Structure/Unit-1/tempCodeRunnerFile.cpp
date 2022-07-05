#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns;
	int counterForZero = 0;

	cout << "\n Enter the Matrix rows and Columns =  ";
	cin >> i >> j;
	
	int Matrix[i][j];
	
	cout << "\n Enter the Sparse Matrix\n";
	for(rows = 0; rows < i; rows++)	
	{
		for(columns = 0; columns < i; columns++) 
		{
			cin >> Matrix[rows][columns];
		}		
	}
 	
	for(rows = 0; rows < i; rows++)
  	{
  		for(columns = 0; columns < j; columns++)
  		{
  			if(Matrix[rows][columns] == 0)
  			{
  				counterForZero++;
			}
		}
  	}

 	if(counterForZero > (rows * columns)/2)
  	{
  		cout << "\nYes Sparse Matrix";
	}
	else
	{
		cout << "\n Not a Sparse Matrix";
	}  	

 	return 0;
}