#include <iostream>

using namespace std;


void intercambiar(int &n1, int &n2)
{
	int temp;
	
	temp = n1;
	n1 = n2;
	n2 = temp;
	
	cout << "valores de n1 y n2 en la funcion intercambiar..." << endl ;
	cout << "n1 : " << n1 << endl ;
	cout << "n2 : " << n2 << endl ;
	
	
}


int main()
{
	
	int n1 = 10, n2= 20;
	
	cout << "valores de n1 y n2 antes de la funcion intercambiar..." << endl ;
	cout << "n1 : " << n1 << endl ;
	cout << "n2 : " << n2 << endl ;
 	
	intercambiar(n1,n2);
	
	
	cout << "valores de n1 y n2 despues de la funcion intercambiar..." << endl ;
	cout << "n1 : " << n1 << endl ;
	cout << "n2 : " << n2 << endl ;
	
	
	
	
	system("pause"); return 0;
	
}
