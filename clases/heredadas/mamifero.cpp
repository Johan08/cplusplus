#include<iostream>
using namespace std;

enum RAZA{GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};


class Mamifero
{
	public:
		
		//constructor
		
		Mamifero(): suEdad(2), suPeso(5){}
		~Mamifero(){}
	
	//accesores
	
	int getEdad() const{return suEdad;}
	void setEdad(int suEdad){this->suEdad = suEdad; }
	
	
	int getPeso()const{return suPeso;} 
	void setPeso(int suPeso){this->suPeso = suPeso;}
	
	
	//OtrosMetodos
	
	void Hablar() const{ cout << "Sonidos de Mamiferos... \n";}
	void Dormir() const {cout << "Estoy Durmiendo";}
	
	
	
	protected:
		
		int suEdad;
		int suPeso;
	
	
};


class Perro : public Mamifero
{

public:	
	//construtor y destructor.
	
	Perro():suRaza(GOLDEN){}
    
	~Perro(){}
	
	// Accesores
	
	RAZA getRaza() const{return suRaza;}
	void setRaza(RAZA raza){suRaza = raza;}
	
	
	//otros metodos.
	void MoverCola() const { cout<< "Cola Moviendose \n";}
	void PedirComida() const {cout << "Pidiendo Comida \n"; }
	
	
private:
	
	RAZA suRaza;
	
	
};


int main()
{
	Perro Model;
	
	Model.Hablar();
	
	Model.MoverCola();
	
	cout<< "Model tiene " << Model.getEdad() << "A\xa4os de Edad.." << endl;
	


	return 0;
	


	system("pause");
	return 0;
}




