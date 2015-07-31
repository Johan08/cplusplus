#include <iostream>

using namespace std;

class SimpleCaballo
{

private:
	int Edad;
	
public:
	
	SimpleCaballo();
	~SimpleCaballo();
	
	
	int getEdad() const
	{
		return Edad;
	}
	
	void setEdad(int Edad)
	{
		this->Edad = Edad;
	}


	
};
