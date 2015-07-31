#include <iostream>

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
	
	
	int getEdad(){ return edad;}
	
	int getPeso(){ return peso;}
	
	
};



int main()
{
	
	Perro p1(10, 5);
	
	
	cout << "Edad : " << p1.getEdad() << endl ;
	
	
	system("pause"); return 0;
}

