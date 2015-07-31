#include "simpleBallo.h"

using namespace std;


SimpleCaballo::SimpleCaballo()
{
	cout << "constructor llamado..." << endl ;
}

SimpleCaballo::~SimpleCaballo()
{
	cout << "destructor llamado..." << endl ;
}



int main()
{
	
	cout << "SimpleCaballo Eclipse... " << endl ;
	SimpleCaballo Eclipse;
	
	cout << "SimpleCaballo *pPuntero = new SimpleCaballo..." << endl ;
	
	
	SimpleCaballo *pPuntero = new SimpleCaballo;
	
	cout << "delete pPuntero " << endl ;
	
	delete pPuntero;
	
	
	
	
	system("pause");
	
	return 0;
}



