#include <iostream>
using namespace std;

class Perro
{
	private: 
	
	int edad, peso;
	
	public: 
	
	Perro(int edad, int peso){
	this->edad = edad;
	this->peso = peso;
	}
	
	~Perro(){}
	
	int getEdad(){return edad;	}
	int getPeso(){return peso;	}
	
};
