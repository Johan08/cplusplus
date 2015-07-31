#include<iostream>

using namespace std;


int main()
{
	
	const int Enero= 0;
	const int febrero= 1;
	const int Marzo= 2;
	const int Junio= 3;
	const int Julio= 4;
	const int Agosto= 0;
	
	
	int ahora;
	
	ahora = Agosto;
	
	if(ahora == Enero || ahora == febrero || ahora == Marzo)
	cout << "Estamos en Verano"<< endl;
	else cout << "Estamos en Invierno"<< endl;
	
	
	
	
	
	
	system("pause");
	return 0;
}
