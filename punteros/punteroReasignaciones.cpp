#include <iostream>
using namespace std;

int main()
{
	int n= 2, n2 = 4;
	
	
	int *pPuntero = &n;
	
	cout << "*pPuntero: " << *pPuntero << endl ;
	cout << "n: " << n << endl;
	
	pPuntero = &n2;
	
	cout << "*pPuntero: " << *pPuntero << endl ;
	cout << "n2: " << n2;
	
	
	system("pause"); return 0;
}
