#pragma once

using namespace std;
class Persona
{

private:

	int *edad, *peso;


public:
	Persona(int, int);
	
	Persona()
	{ 
		edad = new int(2);
		peso = new int(4);
	}
	
	
	~Persona();

	int getEdad() const{ return *edad ; }
	int getPeso(){ return *peso; }

	void setEdad(int edad){ *this->edad = edad; }
	void setPeso(int peso){  *this->peso = peso; }


};

