//Busqueda binaria
//en un arreglo.
#include <iostream>

using namespace std;

void mostrarArreglo(const int[], int); //prototipo de funcion que recibe un arreglo constante


int busquedaBinaria(const int[], int, int); //arreglo, tamano, clave

void ordenarArreglo(int[], int); //prototipo que modifica y ordena el arreglo 


void intercambiar(int&, int&); //prototipo, intercambia los valores de dos elementos


int main()
{
  int clave =0;
  
  const int tamano = 30;
  
  int arreglo[tamano] = {70,91,53,47,42,74,92,61,42,43,6,93,22,80,28,97,10,48,81,70,59,43,50,93,11,23,10,80,6,19};
  //ordenamos el arreglo para que funcione la busquedaBinaria
  
  ordenarArreglo(arreglo,tamano);
 
  cout << "Elementos del arreglo: " << endl;
 
  mostrarArreglo(arreglo,tamano);
 
  cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
 
  cin >> clave;
 
  cout<< "Su valor se encuentra en arreglo["<<busquedaBinaria(arreglo,tamano,clave)<<"]" << endl;
 

  system("pause");
  return 0;
  
}//fin de main
void mostrarArreglo(const int arreglo[], int tamano)
{
    for (int i = 0 ; i < tamano ; i++)
    cout << "arreglo[" << i << "]=" << arreglo[i] << endl;
}

int busquedaBinaria(const int arreglo[], int tamano, int clave)
{
  int Iarriba = tamano-1;
  int Iabajo = 0;
  int Icentro;
  
  while (Iabajo <= Iarriba)
    {
      Icentro = (Iarriba + Iabajo)/2;
      
 
  if (arreglo[Icentro] == clave)
 return Icentro;
 
 
 else
 if (clave < arreglo[Icentro])
   Iarriba=Icentro-1;
 else
   Iabajo=Icentro+1;
    }
  return -1;
}


void ordenarArreglo(int arreglo[], int tamano)
{
  for (int i = 0; i< tamano -1 ; i++)
    for (int j = 0; j< tamano -1 ; j++)
      if (arreglo[j] > arreglo[j+1])
 intercambiar(arreglo[j],arreglo[j+1]);
}



void intercambiar(int &a, int &b)
{
  int tmp = b;
  b = a;
  a = tmp;
}