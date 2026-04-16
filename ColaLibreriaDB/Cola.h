#ifndef COLA_H
#define COLA_H

#include <iostream>
#include <queue>

using namespace std;

class Cola {
	private:
    	queue<int> datos; 

	public:
    	void agregarCola(int);
    	void quitarCola();
    	void mostrarCola();
    	void vaciarCola();
    	bool colaVacia();
    	void mostrarTam();
};

#endif
