#include <iostream>

using namespace std;


typedef unsigned short int USHORT;

int main()
{
	
	USHORT *pInt = new USHORT;
	
	*pInt = 10;
	
	cout << "*pInt: " << *pInt << endl ;
	
	
	delete pInt;
    //cout << "*pInt: " <<  pInt << endl ;
	
	
	long *pLong = new long;
	*pLong = 90000;
	
	cout << "*pLong: " << *pLong << endl ;
	
	
	
	
	
	system("pause");
	return 0;
}
