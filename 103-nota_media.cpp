#include <iostream>
using namespace std;

struct alumnos{
	
	char nombre[20];
	float nota_1;
	float nota_2;
	float nota_3;
	float media;
		
}alumno[4];

int main() {
	
	for(int i=0; i<2; i++){
		
		fflush(stdin);
		cout<<"Alumno: "<<i+1<<""<<endl;
		cout<<"Ingrese el nombre del alumno: ";
		gets(alumno[i].nombre);
		cout<<"Ingrese la nota 1: ";
		cin>>alumno[i].nota_1;
		cout<<"Ingrese la nota 2: ";
		cin>>alumno[i].nota_2;
		cout<<"Ingrese la nota 3: ";
		cin>>alumno[i].nota_3;
		alumno[i].media=(alumno[i].nota_1+alumno[i].nota_2+alumno[i].nota_3)/3;
		cout<<endl;
	}
	system ("cls");
	cout<<endl<<"**Datos de los alumnos**"<<endl<<endl;
	
	for (int i=0; i<2; i++) {
		
		cout<<"Alumno: "<<alumno[i].nombre<<endl;
		cout<<"Nota Media "<<alumno[0].media <<endl;
		if (alumno[i].media>=3.5) {
			cout<<"APTO"<<endl;
		}
		else cout<<"NO APTO"<<endl;
		cout<<endl;
	}
	
	return 0;
}

