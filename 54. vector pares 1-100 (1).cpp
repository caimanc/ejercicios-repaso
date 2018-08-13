//arreglo de pares 1-100
#include <iostream>
using namespace std;
int main ()
{
	int i,j=0,pares=0,a;
	for (i=1;i<101;i++)
	{
		a=i%2;
		if (a==0)
		{
			pares++;
		}
	}
	int A[pares];
	for (i=1;i<101;i++)
	{
		a=i%2;
		if (a==0)
		{
			A[j]=i;
			j++;
		}
	}
	for (j=0;j<pares;j++)
	{
		cout<<A[j]<<" ";
	}
	return 0;
}
