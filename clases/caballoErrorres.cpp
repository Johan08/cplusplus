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
		~Caballo();//destructor
		//declacion de funciones miembros especiales
		
		//Caballo(int Edad, int Peso);
		
		//declarion de las funciones miembros publicas
		int getEdad() const;
		void setEdad(int Edad);
		
		int getPeso();
		void setPeso(int Peso);
		
		void relinchar(); //se deberia declarar como constante
		
	
	
	//	
};

//constructor 

Caballo::Caballo(int suEdad, int suPeso){
	Edad = suEdad; Peso = suPeso;
	
}

//destructor 
Caballo::~Caballo()
{}


// implementacion de fuciones miembros publicas
int Caballo::getEdad() const
{
	return Edad++; //no cumple constante
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
