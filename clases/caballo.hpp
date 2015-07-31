#include <iostream>

using namespace std;


class Caballo
{
	
	// datos miembros privados
	private:
		
	int Edad;
	int Peso;
	
	
	//funciones miembros publicas
	public:
		
		
		Caballo(int, int);//constructor
		~Caballo();//destrusctor
		//declacion de funciones miembros especiales
		
		//Caballo(int Edad, int Peso);
		
		//declarion de las funciones miembros publicas
		int getEdad();
		void setEdad(int Edad);
		
		int getPeso();
		void setPeso(int Peso);
		
		void relinchar();
		
	
	
	//	
};


