#include <iostream>

using namespace std;



class Punto
{
	
	public:
	
	int getPtoX() const
	{
		return x;
	}
	
	void setPtoX(int sux) 
    {
		x = sux;
	}
	
	
	int getPtoY() const
	{
		return x;
	}
	
	void setPtoY(int suy)
	{
		y = suy;
	}
	
	
	private:
		
		int x;
		int y;
		
	
};


class Rectangulo
{

public:
	
	Rectangulo(int superior, int izquierdo, int inferior, int derecho);
	~Rectangulo(){}
	
	
	int getSuperior() const{return Superior;}
	int getInferior() const{return Inferior;}
    int getIzquierdo() const{return Izquierdo;}
	int getDerecho() const{return Derecho;}

	
    void setSuperior(int superior){Superior = superior;}
    void setInferior(int inferior){Inferior = inferior;}
    void setIDerecho(int derecho){Derecho = derecho;}
	void setIzquierdo(int izquierdo){Izquierdo = izquierdo;}
	
	
	Punto getSuperiorIzquierdo() const {return suSuperiorIzquierdo;}
    Punto getSuperiorDerecho() const {return suSuperiorDerecho;}
  	Punto getInferiorIzquierdo() const {return suInferiorIzquierdo;}
    Punto getInferiorDerecho() const {return suInferiorDerecho;}


    void setSuperiorIzquierdo(Punto localizacion) {suSuperiorIzquierdo = localizacion;}
    void setSuperiorDerecho(Punto localizacion) {suSuperiorDerecho = localizacion;}
    void setInferiorIzquierdo(Punto localizacion) {suInferiorIzquierdo = localizacion;}
    void setInferiorDerecho(Punto localizacion) {suInferiorDerecho = localizacion;}
    
    int getArea() const;

	
private:

	
	Punto suSuperiorIzquierdo;
	Punto suSuperiorDerecho;
	Punto suInferiorIzquierdo;
	Punto suInferiorDerecho;
	int Superior;
	int Inferior;
	int Derecho;
	int Izquierdo;
	
	
};
