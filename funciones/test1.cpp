#include <iostream>

using namespace std;

void intercambiar(int *n1, int *n2)
{
	int temp;
	
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
	
   cout << "En la funcion intercambiar n1: " << *n1 << " y n2 : " << *n2 << endl ;
    
}


int main()
{
	
	int n1 = 9, n2 = 5;
	
    cout << "antes de funcion intercambiar n1: " << n1 << " y n2 : " << n2 << endl ;
    
	intercambiar(&n1,&n2);
	
    cout << "despues de funcion intercambiar n1: " << n1 << " y n2 : " << n2 << endl ;
    
	
	system("pause");
	return 0;
}
