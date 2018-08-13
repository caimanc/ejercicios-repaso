//potencia de un numero
#include <iostream>
using namespace std;
int potencia (int x,int y)
{
	int a;
	if (y==1)
	{
		
		return x;
	}
	else 
	{
		a=x*x;
	return (potencia((a),(y-1)));
	}
	
}
int main ()
{
	int x,y,resultado;
	cout<<"digite el numero a elevar"<<endl;
	cin>>x;
	cout<<"digite la potencia que decea aplicar"<<endl;
	cin>>y;
	resultado= potencia (x,y);
	cout<<resultado;
	return 0;
}
