#include <iostream>
using namespace std;


class Felino
{

private:
	
	string tipo;
    int  peso;
	int  edad;

public: 

Felino(string, int, int);

~Felino();



string getTipo() const
{
	return tipo;
}

int getPeso() const;
int getEdad() const;


void setTipo(string);

void setPeso(int);

void setEdad(int edad)
{
	this->edad = edad;
}

	
	
};
