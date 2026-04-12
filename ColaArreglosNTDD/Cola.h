#ifndef COLA_H
#define COLA_H
#include <iostream>
#include <stdlib.h>
using namespace std;

class Cola
{
	private:
		struct Numeros{
			int *arreglo = NULL;
			int frente = 0;
			int fin = -1;
			int capacidad = 0;
		};
		
		
		int elemento;
		
		
		Numeros arr;
		int i=0;
		
	public:	
		bool creada = false;
		
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
};

#endif
