//fac con recursividad
#include <iostream>
using namespace std;
int fact (int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		n=n*fact(n-1);
	}
	return n;
}
int main ()
{
	int n,factorial;
	cout<<"digite un numero"<<endl;
	cin>>n;
	factorial=fact(n);
	cout<<factorial;
	return 0;
}
