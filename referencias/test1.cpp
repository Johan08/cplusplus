#include<iostream>
using namespace std;

int main()
{
	
	int valor = 5, valor2 = 10;
	
	int &referencia = valor ;
	
	
	cout << "valor " << valor << endl ;
	cout << "valor de la referencia: " << referencia <<endl ;
	
	// n se puede reasignar
    referencia = valor2 ;
	
	
	cout << "valor2 " << valor2 << endl ;
	cout << "valor de la referencia: " << referencia <<endl ;
	cout << "valor " << valor << endl ;
	
	system("pause"); return 0;
}
