#include "CaballoInline.h"


using namespace std;


Caballo::Caballo(int edad)
{
	Edad = edad;
}


Caballo::~Caballo()
{
	
}



int main()
{
	Caballo Janto(15);
	
	
	Janto.Relinchar();
	
	cout<< endl << "Janto es un caballo que tiene: " << Janto.getEdad() << "anios" << endl ;

	Janto.setEdad(22);
	
	cout << "Janto es un caballo que tiene ahora: " << Janto.getEdad() << "anios" ;

	
	
	system("pause");
	return 0;
}
