#include "LIBRERIA.h"
#include <iostream>

using namespace std;

void Pila::push(int val) {
    pila.push(val);
}

void Pila::pop() {
    if (pila.empty()) {
        cout << "Pila vacia\n";
    } else {
        cout << "Eliminado: " << pila.top() << endl;
        pila.pop();
    }
}

void Pila::mostrar() {
    if (pila.empty()) {
        cout << "Pila vacia\n";
        return;
    }

    stack<int> aux = pila;

    while (!aux.empty()) {
        cout << aux.top() << endl;
        aux.pop();
    }
}

bool Pila::vacia() {
    return pila.empty();
}


int Pila::tamanio() {
    return pila.size();
}

void Pila::vaciar() {
    while (!pila.empty()) {
        pila.pop();
    }
    cout << "Pila vaciada\n";
}
