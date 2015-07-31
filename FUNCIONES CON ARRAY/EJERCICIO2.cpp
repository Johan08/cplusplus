#include <iostream>
using namespace std;


void intercambio(int [2]);


int main()
{
	int a[] = {12,4};
	
	for(int i = 0; i<2; i++)
    { cout << "\n\n a["<<i<<"] : " << a[i] << endl; }     
   
    intercambio(a);
    
   for(int i = 0; i<2; i++)
    { cout << "\n\n a["<<i<<"] : " << a[i
	] << endl; }     

system("pause"); return 0;	
}


void intercambio(int a[2])
{
	int temp;
	
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	
}

