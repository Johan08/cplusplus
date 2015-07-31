#include <iostream>

using namespace std;

int main()
{
	int n1 = 5;
	
	cout << "valor en memoria de n1 : " << &n1 << endl ;
	
	
	int *pN1 = &n1;
	
	cout << "valor de *pN1 : " << *pN1 << endl ;
	
	*pN1 = 6;
	
	cout << "valor de n1 : " << n1 << endl ;
	
	
	
	system("pause"); return 0;
}
