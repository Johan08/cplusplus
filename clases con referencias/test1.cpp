#include <iostream>
using namespace std;


class Caballo
{
	private:
		int edad, peso;
	
	public:
		
		Caballo(int edad, int peso)
		{
			this->edad = edad;
			this->peso = peso;
		}

        ~Caballo(){}
        
        // metodos accesores
        
        int getPeso(){ return peso ;}
	    int getEdad(){ return edad; }
	
	
};


int main()
{
	Caballo c1(12,50);
	
	cout<< "peso c1: " << c1.getPeso() << endl ; cout << "edad c1: " << c1.getEdad() << endl ;
	
	
	system("pause"); return 0;
}


