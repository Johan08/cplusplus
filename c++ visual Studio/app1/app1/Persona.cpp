#include "stdafx.h"
#include "Persona.h"


using namespace std;


Persona::Persona(int edad, int peso)
{
	cout << "Construtor Llamado ... " ;

	*this->edad = edad;
	*this->peso = peso;
}

/*
Persona::Persona()
{ cout << "contructor llamado ... " << endl ; edad = 1 ; }
*/
Persona::~Persona()
{
	cout << "Destructor llamado ... " << endl;
}


void cambiarValor(Persona&);

int main()
{

	cout << "Simple Persona ..." << endl ;

	Persona pepe;

	cout << "Persona *pPersona = new Persona ..." << endl ;

	Persona *pPersona = new Persona;

	cout << "Edad y Peso de Persona en el main..." << endl ;

	cout << "Edad de Persona : " << pPersona->getEdad() << endl ;
	cout << "Peso de Persona : " << pPersona->getPeso() << endl ;


	cambiarValor(*pPersona);

	cout << "Edad y Peso despues de la funcion cambiaValor()..." << endl ;

	cout << "Edad de Persona : " << pPersona->getEdad() << endl ;
	cout << "Peso de Persona : " << pPersona->getPeso() << endl ;


	delete pPersona;
	

	system("pause");
	return 0;
}


void cambiarValor(Persona &p1)
{
	cout << "Edad y Peso en la funcion cambiaValor ... "  << endl;

	
	cout << "Edad de Persona : " << p1.getEdad() << endl ;
	cout << "Peso de Persona : " << p1.getPeso() << endl ;


	cout << "Configurar Valor de Edad y Peso en la funcion cambiaValor ... "  << endl;

	p1.setEdad(100);
	p1.setPeso(200);

	cout << "Edad de Persona : " << p1.getEdad() << endl ;
	cout << "Peso de Persona : " << p1.getPeso() << endl ;


}