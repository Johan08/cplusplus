#include <iostream>
using namespace std;

int main()
{
	int local = 6;
	
	int *pLocal = &local ;
	
	int *pPuntero = new int(7); 
	
	cout << "*pPuntero : " << *pPuntero << endl ;
	
	delete pPuntero ;
	
	*pPuntero = 0;
	
	pPuntero = new int(9);
	
	delete pPuntero;
	
	cout << "*pPuntero : " << *pPuntero << endl ;
	
	
	
	
	system("pause"); return 0;
}
