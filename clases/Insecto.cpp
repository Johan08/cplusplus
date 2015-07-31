#include "Insecto.hpp"
using namespace std;


Insecto::Insecto(int edad, int peso)
{
	this->edad = edad;
	this->peso = peso;
}

int Insecto::getPeso()
{
	return peso;
}


int main()
{
	Insecto i1(13,2);
	
    cout << "Edad : " << i1.getEdad() << endl ;
	cout << "Peso : " << i1.getPeso() << endl ;
	
	system("pause"); return 0;
}
