#include "stdafx.h"
#include "Caballo.h"

using namespace std;
int main()
{

	Caballo c1[2];

	cout << "Edad de c1: " << c1[1].getEdad() << endl ;
	cout << "Peso de c1: " << c1[1].getPeso() << endl ;
	
	c1[2].setEdad(12);
	c1[2].setPeso(24);

	cout << "Edad de c1[2]: " << c1[2].getEdad() << endl ;
	cout << "Peso de c1[2]: " << c1[2].getPeso() << endl ;
	


	system("pause"); return 0;
}
