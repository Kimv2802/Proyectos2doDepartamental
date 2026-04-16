#include <iostream>
#ifndef COLA_H
#define COLA_H

class Cola
{
	private:
		struct Nodo{
			int dato;
			Nodo *siguiente;
		};
		
		Nodo *frente;
		Nodo *fin;


	public:
		void pedirDatos(int &);	
		void agregarCola(int &);
		void quitarCola();
		void mostrarCola();
		void vaciarCola();
		bool colaVacia();
		void mostrarTam();
		
		Cola();
		~Cola();
		
};

#endif

