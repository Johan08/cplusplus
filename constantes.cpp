#include<iostream>

using namespace std;

int main()
{
	//variable enumeradas
	enum Meses{Enero, Febrero, Marzo,Junio,Julio,Agosto};
	
	Meses ahora;
	
	ahora = Enero;
	
	if(ahora == Enero || ahora == Marzo || ahora == 2){
		
		cout << "Estamos en Verano" << endl ;
		
		
	}
	
	else cout<<"Estamos en Invierno \n" ; 
	

	system("pause");
	return 0;
}
