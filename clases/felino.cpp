#include "felino.h"

using namespace std;


Felino::Felino(string tipo, int peso, int edad)
{
	this->tipo = tipo;
	this->peso = peso;
	this->edad = edad;
}


Felino::~Felino()
{
}


int Felino::getPeso() const
{
	return peso;
}

int Felino::getEdad() const
{
	return edad;
}


void Felino::setTipo(string tipo)
{
	this->tipo = tipo;
}

void Felino::setPeso(int peso)
{
	this->peso = peso;
}


int main()
{
	
	Felino *Gato = new Felino("tigreso", 21, 30);
	
	
	
	
	
	cout << "Cat Type: " << Gato->getTipo() << endl ;
	
	
	
	
	
	system("pause");
	
	return 0;
}

