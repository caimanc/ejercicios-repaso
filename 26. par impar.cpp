//par o impar
#include <iostream>
using namespace std;
int main ()
{
	int a,b;
	cout<<"ingrese el numero a nalizar"<<endl;
	cin>>a;
	b=a%2;
	if (b!=0)
	{
		cout<<"es impar"<<endl;
	}
	else
	{
		cout<<"es par"<<endl;
	}
	
	return 0;
}
