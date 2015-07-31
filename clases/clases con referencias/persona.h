#include <iostream>

using namespace std;


class Persona
{
	private:
		
		int edad, peso;
	
	public:
		
		Persona(int edad, int peso){
			this->edad = edad;
			this->peso = peso;
		}
		
		~Persona()
		{}
	
	 int getEdad(){return edad; }
	 int getPeso() {return peso; }
	 
	
};




