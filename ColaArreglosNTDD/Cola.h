#ifndef COLA_H
#define COLA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Cola
{
	private:
		struct Numeros{
			int *arreglo;
			int frente;
			int fin;
			int capacidad;
		};
		
		
		int elemento;
		
		
		Numeros arr;
		int i;
		
	public:	
		bool creada;
		
		void crearArreglo();
		void redimensionarArreglo();
		void agregarElemento();
		void eliminarElemento();
		void mostrarCapacidad();
		void mostrarCola();
		bool isFull();
		bool isEmpty();
		void mostrarTamano();
		void vaciarCola();
		Cola();
		~Cola();
};

#endif
