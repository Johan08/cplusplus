#include <iostream>

using namespace std;

typedef unsigned short int USHORT;



USHORT suma(int num1, int num2)
{
  
  USHORT res = num1 + num2;	
	
	return res;

}


int resta(int num1, int num2)
{
	int res = num1 - num2;
	
	
	return res;
}


int multiplica(int num1, int num2)
{

	return (num1 * num2);
}


int main(){

int num1, num2, res1, res2, res3;	
	
	cout << "Ingrese el 1er numero: " << endl ;
	cin >> num1;
	
	cout << "Ingrese el 2do numero: " << endl ;
	cin >> num2;
	
	res1 = suma(num1,num2);
    
    res2 = resta(num1, num2);
    
    res3 = multiplica(num1, num2);
    
    
	
	cout << "resultado de la suma es: " << res1 << endl ;
		cout << "resultado de la resta es: " << res2 << endl ;
		cout << "resultado de la multiplicacion es: " << res3 << endl ;
	
	
	
	system("pause");
	return 0;
}








