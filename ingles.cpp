#include<iostream>
using namespace std;

int main()
{
	int notas[6];
	double resultado = 0;
	
	double porciento[6] = {0.2, 0.25, 0.15, 0.2, 0.1, 0.1};
	
	
	for(int i=1; i<=6; i++)
	{
		cout << "Ingrese nota: " << notas[i] << endl ;
		cin >> notas[i]; 
		
	}
	
	for(int j = 0; j<=6; j++)
	{
		
		resultado += notas[j] * porciento[j];
		
		
	}
	
	cout << "El resultado de la nota es: " << resultado ;
	
	
	
	
	
	
	system("pause");
	return 0;
}
