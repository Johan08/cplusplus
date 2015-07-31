#include "caballo.hpp"

using namespace std;

//constructor 


Caballo::Caballo(int suEdad, int suPeso){
	Edad = suEdad; Peso = suPeso;
	
}

//destructor 
Caballo::~Caballo()
{}


// implementacion de fuciones miembros publicas
int Caballo::getEdad()
{
	return Edad;
}

void Caballo::setEdad(int suEdad)
{
    Edad = suEdad;
}


int Caballo::getPeso()
{
	return Peso;
}

void Caballo::setPeso(int suPeso)
{
	Peso = suPeso;
}

void Caballo::relinchar()
{
	cout <<"prprprprprprpr" << endl;
}



int main()
{
	
	Caballo Janto(5,40);
	
	
	//Janto.setEdad(15);
	
	//Janto.setPeso(40);
	
	
	//Janto.Edad = 110;
	
	cout<<"Janto tiene: " << Janto.getEdad() << " anios de Edad" << endl ;
	
	Janto.relinchar();
	
	cout<<"Janto tiene: " << Janto.getPeso() << " Kilos" << endl ;
	
	
	system("pause");
	return 0;
}
