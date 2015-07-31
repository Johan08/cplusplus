#include<iostream>

using namespace std;


int main()
{
	
	int num[]={52,90,63,27,14,91,46,71,43,42,24,99,67,86,51,99,42,20,18,16,31,20,94,31,21,99,37,57,79,72};
	
	cout << "cantidad de elementos de un array: " << sizeof(num)/4 << "\n\n"; 
	
	int aux;
	
	
	for(int i = 1;i< sizeof(num) / 4; i++)
	{
		for(int j = 0; j< (sizeof(num)/4) - i; j++)
		{
			
			// si NA > ns
			
			if(num[j]<num[j+1])
			{
			    aux = num[j];
			    num[j] = num[j+1];
			    num[j+1] = aux;
			}
			
			
		}
		
	}
	
	cout << "El orden es: " << endl ;
	
	
	for(int x = 0; x < sizeof(num)/4; x++)
	{
		
		cout << num[x] << "\n" ;
		
	}
	
	
	
	
	
	system("pause");
	return 0;
}
