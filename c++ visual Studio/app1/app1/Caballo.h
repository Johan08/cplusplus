#pragma once



class Caballo
{

private:
	int edad, peso;


public:

	Caballo(int edad, int peso){
		this->edad = edad;
		this->peso = peso;
	}

	Caballo(){
		this->edad = 12;
		this->peso = 23;
	}

	~Caballo(void)
	{}
   
	int getEdad(){ return edad;} 
	int getPeso(){ return peso;}

	void setEdad(int edad){ this->edad = edad;}
	void setPeso(int peso){ this->peso = peso;}


};

