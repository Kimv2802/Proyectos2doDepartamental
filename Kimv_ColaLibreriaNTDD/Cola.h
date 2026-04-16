#ifndef COLA_H
#define COLA_H

#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Elemento {
    int id;
    string nota; 
};

class Cola {
private:
    queue<Elemento> datos; 

public:
    void agregarCola(int n, string m);
    void quitarCola();
    void mostrarCola();
    void vaciarCola();
    bool colaVacia();
    void mostrarTam();
};

#endif
