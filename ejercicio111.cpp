#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void lectura(){
	ifstream archivo;
	string texto;
	archivo.open("ejercicio110.txt",ios::in);
	if (archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
}
int main(int argc, char** argv) {
	
	return 0;
}
