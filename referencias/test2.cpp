#include <iostream>
using namespace std;


void intercambiar(int &n1,int &n2)
{
	int temp;
	
	temp = n1;
	n1 = n2;
	n2 = temp;
	
}



int main()
{
	
	int n1 = 5 , n2 = 10; cout<< "valor de n1 : " << n1 << " valor de n2 : " << n2 << endl ;
	
    intercambiar(n1,n2);
    
    cout<< "valor de n1 : " << n1 << " valor de n2 : " << n2 << endl ;
	
	
	system("pause"); return 0;
}
