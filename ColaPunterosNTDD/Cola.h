#include <iostream>
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
		void quitarCola();
		void mostrarCola();
		void vaciarCola();
		bool colaVacia();
		void mostrarTam();
};

#endif

