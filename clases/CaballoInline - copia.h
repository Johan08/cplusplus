#include <iostream>

using namespace std;



class Caballo
{
	public:
		//metodos inline
		Caballo(int);
		~Caballo();
		
		int getEdad() const
	    {
		return Edad;
		}
		void setEdad(int edad)
		{		
		Edad = edad;
		}
		
		void Relinchar()const{cout<<"juuuuuuuuuuu, jiiiiiiii \n"; }
		
	private:
		
	    int Edad;
		
		
};
