

// punteros

#include <iostream>
using namespace std;


int main()
{
	// declaramos un ptero
	int *pPuntero = 0;
	
	// declaramos una variable entera y la definimos con un valor
	int num1 = 5;
	
   // le asignamos la direccion de memoria a pPuntero
	pPuntero = &num1;
	
	cout<< "valor de pPuntero: " << *pPuntero << endl ;
	cout << "valor de num1: " << num1 << endl ;
	cout << "direccion de pPuntero:" << pPuntero << endl ;
	cout << "direccion de num1:" << &num1 << endl ;
	
	
	system("pause");
	return 0;
}
