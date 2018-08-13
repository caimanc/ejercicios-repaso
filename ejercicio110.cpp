#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escritura(){
	ofstream archivo;
	archivo.open("ejercicio110.txt",ios::out);
	
	if (archivo.fail()){
		cout<<"no se pudo crear el archivo";
	}
	int i=0,aux=0;
	char caracteres [255];
		for(i=0;i<256;i++){
		aux++;
		int cadena=aux;
		char str[256];
		archivo<<(str,"%d", cadena);
		printf("%d\t-\t%c\n",i,i);//impresion por parametros
		caracteres[aux]=i;
		
	}
	archivo.close();
}
int main(int argc, char** argv) {
	escritura();
	return 0;
}
