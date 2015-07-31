#include <iostream>
using namespace std;

void intercambio(int []);


int main()
{
	
	int a[2] = {12,15};
	
	cout << "\n\n ANTES DE LA FUNCION INTERCAMBIO.. \n\n" << endl ;
	for(int i = 0; i< 2; i++ )
	{ cout << "a [" <<i<<"] : "<<a[i] << endl;	}
		
	intercambio(a);
	cout << "\n\n DESPUES DE LA FUNCION INTERCAMBIO.. \n\n" << endl ;
	for(int i = 0; i< 2; i++ )
	{ cout << "a [" <<i<<"] : "<<a[i] << endl;	}
	
	
	
	system("pause"); return 0;
}

void intercambio(int a[])
{
	int temp;
	
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	
	cout << "\n\n EN LA FUNCION INTERCAMBIO.. \n\n" << endl ;
	
	for(int i = 0; i< 2; i++ )
	{ cout << "a [" <<i<<"] : "<<a[i] << endl;	}
	
	
}
