#ifndef COLA_H
#define COLA_H
#include <iostream>
using namespace std;

class Cola {
private:
    int *arreglo;
    int frente;
    int fin;
    int capacidad;

public:
    bool creada;

    Cola();
    ~Cola();

    void crearArreglo();
    void redimensionarArreglo();
    void agregarElemento();
    void eliminarElemento();
    void mostrarCola();
    void vaciarCola();
    void mostrarTamano();
    void mostrarCapacidad();
    bool isFull();
    bool isEmpty();
};

#endif
