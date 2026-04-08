#ifndef COLA_H
#define COLA_H

struct Nodo{
	int dato;
	Nodo *siguiente;
};

class Cola
{
	private:
		Nodo *frente=NULL;
		Nodo *fin=NULL;

	public:
		void pedirDatos(int &);	
		void agregarCola(int &);
};

#endif
