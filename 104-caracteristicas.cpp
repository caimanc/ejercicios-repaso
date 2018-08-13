//caracteristicas de las personas
#include <iostream>
using namespace std;

struct personas{
	char nombre[20];
	char sexo[20];
	int edad;	
	int peso;
	char colorc[20];
	char colorp[20];
	char coloro[20];
	char nacionalidad[20];
	int telefono;} caracteristicas[20];
	

int main() {
	
	int n=0;
	
	cout<<"ingrese la cantidad de personas: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<"Persona: "<<i+1<<""<<endl;
		cout<<"Ingrese el nombre de la persona: ";
		gets(caracteristicas[i].nombre);
		cout<<"Ingrese el sexo: ";
		gets(caracteristicas[i].sexo);
		cout<<"Ingrese la edad: ";
		cin>>caracteristicas[i].edad;
		cout<<"Ingrese el peso: ";
		cin>>caracteristicas[i].peso;
		fflush(stdin);
		cout<<"ingrese el color del cabello: ";
		gets(caracteristicas[i].colorc);
		cout<<"ingrese el color de la piel: ";
		gets(caracteristicas[i].colorp);
		cout<<"ingrese el color de los ojos: ";
		gets(caracteristicas[i].coloro);
		cout<<"ingrese la nacionalidad: ";
		gets(caracteristicas[i].nacionalidad);
		cout<<"ingrese el telefono: ";
		cin>>caracteristicas[i].telefono;
		
	}
	
	cout<<endl<<"**Datos de las personas**"<<endl<<endl;
	
	for(int i=0; i<n; i++){
		
		cout<<"Nombre: "<<caracteristicas[i].nombre<<endl;
		cout<<"Sexo: "<<caracteristicas[i].sexo<<endl;
		cout<<"Edad: "<<caracteristicas[i].edad<<endl;
		cout<<"Peso: "<<caracteristicas[i].peso<<endl;
		cout<<"Color del cabello: "<<caracteristicas[i].colorc<<endl;
		cout<<"Color de la piel: "<<caracteristicas[i].colorp<<endl;
		cout<<"Color de los ojos: "<<caracteristicas[i].coloro<<endl;
		cout<<"Nacionalidad: "<<caracteristicas[i].nacionalidad<<endl;
		cout<<"Telefono: "<<caracteristicas[i].telefono<<endl;
		
	}
	
	return 0;
}
