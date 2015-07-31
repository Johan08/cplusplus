#include "Auto.h"

using namespace std;


Auto::Auto(string modelo, int motor, int anio)
{
	this->modelo = modelo;
	this->motor = motor;
	this->anio = anio;
	
}



Auto::~Auto(){}


string Auto::getModelo() const{return modelo;}

int Auto::getAnio() const{return anio;}

int Auto::getMotor() const{return motor;}


void Auto::setMotor(int motor){this->motor = motor;}
void Auto::setAnio(int anio){this->anio = anio;}


int main()
{
	
	Auto Nissan("saloon", 2000, 2002);
	
	Nissan.setMotor(2004);
	
	cout << "modelo: " << Nissan.getModelo() << endl ;
	cout << "motor: " << Nissan.getMotor() << endl ;
	cout << "anio: " << Nissan.getAnio() << endl ;
	
	
	system("pause");
	return 0;
}



