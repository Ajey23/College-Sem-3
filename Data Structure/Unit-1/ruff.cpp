#include<iostream>
using namespace std;
class upper
{
	public:
		int a[3][3],i,j;
	void input()
	{
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	//cout<<endl;	
	}
	void disp()
	{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i<j)
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
	upper u1;
	u1.input();
	u1.disp();
	return 0;
}