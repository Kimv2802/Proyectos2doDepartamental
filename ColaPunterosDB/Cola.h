#include <iostream>
#ifndef COLA_H
#define COLA_H

class Nodo{
	public: 
		int dato;
		Nodo *siguiente;
		
		//constructor de la clase Nodo
		Nodo(int valor){
			dato = valor;
			siguiente = NULL;
		}
		
	
};

class Cola
{
	private:
		Nodo *frente;
		Nodo *fin;

	public:
		Cola();
		~Cola();
		void pedirDatos(int &);
		void agregarCola(int);
		bool colaVacia();
		void quitarCola();
		void mostrarCola();
		void vaciarCola();
		void mostrarTam();
		
};

#endif

