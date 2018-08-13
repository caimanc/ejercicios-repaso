//106.Escribir un programa que usando apuntadores permita manejar un grupo de valores de los 
//tipos:  int,  float  y  double.  Se  debe  hacer  captura  y  visualización  del  valor  usando 
//apuntadores.

#include <iostream>
using namespace std; 

int main()
{
	int q,*puntero_1;
	float a,*puntero_2;
	double z,*puntero_3;
	
	cout<<"DIGITE UN NUMERO ENTERO"<<endl;	
	cin>>q;
	cout<<"DIGITE UN NUMERO DE TIPO FLOTANTE"<<endl;	
	cin>>a;
	cout<<"DIGITE UN NUMERO DE TIPO DOUBLE"<<endl;	
	cin>>z;
	
	puntero_1=&q;
	
	puntero_2=&a;
	
	puntero_3=&z;
	
	cout<<"USTED INGRESO "<<*puntero_1<<" COMO NUMERO ENTERO"<<endl;
	cout<<"USTED INGRESO "<<*puntero_2<<" COMO NUMERO DE TIPO FLOTANTE"<<endl;
	cout<<"USTED INGRESO "<<*puntero_3<<" COMO NUMERO DE TIPO DOUBLE"<<endl;
	
	return 0;
}











