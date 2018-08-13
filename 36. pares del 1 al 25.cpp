//pares entre 1-25
#include <iostream>
using namespace std;
int main ()
{
	int i=1,a;
	do
	{
		a=i%2;
		if (a!=0)
		{
			i++;
		}
		else
		{
			cout<<i;
			i++;
		}
		
	}while (i<26);
	return 0;
}
