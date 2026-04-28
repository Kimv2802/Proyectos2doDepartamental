#include "ARREGLO.h"
#include <iostream>
using namespace std;

Pila::Pila() {
    tope = -1;
}

void Pila::push(int val) {
    if (tope == MAX - 1)
        cout << "Pila llena\n";
    else
        datos[++tope] = val;
}

void Pila::pop() {
    if (tope == -1)
        cout << "Pila vacia\n";
    else
        cout << "Eliminado: " << datos[tope--] << endl;
}

void Pila::mostrar() {
    if (tope == -1) {
        cout << "Pila vacia\n";
        return;
    }

    for (int i = tope; i >= 0; i--)
        cout << datos[i] << endl;
}


bool Pila::estaVacia() {
    return tope == -1;
}

int Pila::tamano() {
    return tope + 1;
}

void Pila::vaciar() {
    tope = -1;
    cout << "Pila vaciada\n";
}
