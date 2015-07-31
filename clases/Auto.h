#include <iostream>

using namespace std;


class Auto
{
	private: 
	
	string modelo;
	int motor;
	int anio;
	
	public:
		
	 string getModelo() const;
	 int getMotor() const;
	 int getAnio() const;
	 
	 //inline
	 void setModelo(string modelo)
	 {
	 	this->modelo = modelo;
	 };
	 void setMotor(int);
	 void setAnio(int);
	 
	 
	 Auto(string, int, int);
	 Auto();
	 
	 ~Auto();
	
	
};
