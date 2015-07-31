#include "rectangulo.h"

Rectangulo::Rectangulo(int superior, int izquierdo, int inferior, int derecho)
{
	Superior = superior;
	Izquierdo = izquierdo;
	Inferior = inferior;
	Derecho = derecho;	
	
	suSuperiorIzquierdo.setPtoX(izquierdo);
	suSuperiorIzquierdo.setPtoY(superior);
	
	suSuperiorDerecho.setPtoX(derecho);
	suSuperiorDerecho.setPtoY(superior);
	
	suInferiorIzquierdo.setPtoX(izquierdo);
	suInferiorIzquierdo.setPtoY(inferior);
	
	suInferiorDerecho.setPtoX(derecho);
	suInferiorDerecho.setPtoY(inferior);
	
}


int Rectangulo::getArea() const 
{

int ancho = Derecho-Izquierdo;
int alto = Superior-Inferior;

return (ancho * alto);

}


int main()
{
	
	
	Rectangulo miRectangulo(100,20,50,80);
	int Area = miRectangulo.getArea();
	
	cout << "Area es: " << Area << endl;
	
	
	system("pause");
	return 0;
}
