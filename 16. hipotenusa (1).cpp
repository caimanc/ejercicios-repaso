#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	double a,b,c;
	cout<<"ingrese el valor de uno de los lados"<<endl;
	cin>>a;
	cout<<"ingrese el valor del otro lado"<<endl;
	cin>>b;
	c=sqrt((a*a)+(b*b));
	cout<<"el valor de la hipotenusa con lado1="<<a<<" y lado2="<<b<<" es: "<<c<<endl;
	return 0;
}
