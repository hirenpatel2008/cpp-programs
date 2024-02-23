#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j,k;
	int line = 4;
	int num = 1;
	for(i=1;i<=line;i++)
	{
		for(j=1;j<=line-i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			cout<<num<<" ";
			num++;
		}
		cout<<endl;
	}
	return 0;
}
