//copia de 5 numeros en dos arreglos
#include <iostream>
using namespace std;
int main ()
{
	int x,A[5],B[5],i;
	cout<<"ingrese el numero base"<<endl;
	cin>>x;
	for (i=0;i<5;i++)
	{
		x=x++;
		A[i]=x++;
	}
	for (i=0;i<5;i++)
	{
		B[i]=A[i];
	}
	for (i=0;i<5;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
	for (i=0;i<5;i++)
	{
		cout<<B[i]<<" ";
	}
	return 0;
}
