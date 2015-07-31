#include "persona.h"

using namespace std;


int main()
{
	
	Persona p1(12,2);
	
	Persona &rp1 = p1;
	
	
	cout << "Edad de p1: " << p1.getEdad() << endl ;
	cout << "Peso de p1: " <<p1.getPeso() << endl ;
	
	cout << "Edad de rp1: " << rp1.getEdad() << endl ;
	cout << "Peso de rp1: " << rp1.getPeso() << endl ;
	
	
	
	system("pause"); return 0;
}

