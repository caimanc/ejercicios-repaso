// programa conteo numeros
#include<iostream>
using namespace std;
int main()
{
	int n,i,num,pos,neg,zero;
	i=0;pos=0;neg=0;zero=0;
	cout<<"Digite la cantidad de numeros a analizar"<<endl;
	cin>>n;
	while(i<n)
	{
		cout<<"Digite un numero entero a analizar"<<endl;
		cin>>num;
		if(num>0)
		{
			cout<<"Es positivo"<<endl;
			pos++;
		}
		else{
			if(num<0){
				cout<<"Es negativo"<<endl;
				neg++;			
			}
			else{
				cout<<"Es cero"<<endl;
				zero++;
			}
		}
	i++;	
	}
	cout<<"La cantidad de numeros positivos es:"<<pos<<endl;
	cout<<"La cantidad de numeros negativos es:"<<neg<<endl;
	cout<<"La cantidad de ceros :"<<zero<<endl;
	system("PAUSE");
	return 0;
}
//Fin de programa
