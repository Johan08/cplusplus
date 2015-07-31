#include <iostream>

using namespace std;


// definción de la funcion 
void intercambiar(int *n1, int *n2)
{
	
	int temp ;
	
	temp = *n1;
	*n1 = *n2;
	*n2 = temp ;
	
	cout << "funcion intercambiar ... " << endl ;
	
   	cout << "valor de n1: " << *n1 << " valor de n2: " << *n2 << endl;
	
	
}


int main()
{
	int n1, n2;
	
	cout << "Ingrese n1: "; cin >>  n1 ;
	cout << endl;
	cout << "Ingrese n2: "; cin >>  n2 ;
	cout << endl;
	
	
	
	cout << "valor de n1: " << n1 << " valor de n2: " << n2 << " antes de la funcion intercambiar... "<< endl;	
	
	// le pasamos la direccion de memoria a la funcion...
	intercambiar(&n1,&n2);
	
	

	cout << "valor de n1: " << n1 << " valor de n2: " << n2 << " despues de la funcion intercambiar... "<< endl;
	
	
	system("pause");
	return 0;
}



