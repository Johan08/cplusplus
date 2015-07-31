#include <iostream>

using namespace std;

int main()
{
	
	int varLocal = 5;
	int *pLocal = &varLocal;
	
	int *pHeap = new int;
	
	*pHeap = 7;
	
	cout << "varLocal: " << varLocal << endl;
	cout << "*pLocal: " << *pLocal << endl;
	
	
	cout << "*pHeap: " << *pHeap << endl ;
	
	
	// liberamos la memoria del free Store.
	delete pHeap;
	
	
	pHeap = new int;
	
	*pHeap=17;
	
		cout << "*pHeap: " << *pHeap << endl ;
	
	delete pHeap;
	
	
	system("pause");
	return 0;
}



