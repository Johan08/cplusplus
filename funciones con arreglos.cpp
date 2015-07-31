#include <iostream>
using namespace std;


// https://www.youtube.com/watch?v=3lcPprJAqtQ

// n va hacer la cantidad e datos que va a llevar el array.
void leerDatos(int lista[], int n)
{

	for(int i = 0; i < n; i++)
	{
		cout << "Ingrese el datos  " << i + 1 << ": ";
     	cin >> n;
			
	}
}

void printLista(int lista[],int n)
{
	
	cout << "ELEMENTOS DE LA LISTA \n\n\n" ;
	for(int i=0; i<n; i++)
	{
		cout << "elemento " << i + 1 <<" : " << lista[i] << "\n\n";
	}
	
}



int main()
{
	
	
	
	int n = -1;
	
	
do
{
	cout <<"Cuantos numeros vas a introducir : " << endl;
	cin >> n;


}while(!((n>=0) && (n<=20))	);

	int lista[n];
	
	leerDatos(lista,n);
	
	
	
	
	system("pause");
	return 0;
}
