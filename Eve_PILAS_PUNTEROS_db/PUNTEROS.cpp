#include "PUNTEROS.h"
#include <iostream>

using namespace std;

Pila::Pila() {
    tope = NULL;
}

Pila::~Pila() {
    Nodo* aux;
    while (tope != NULL) {
        aux = tope;
        tope = tope->sig;
        delete aux;
    }
}

void Pila::push(int val) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = val;
    nuevo->sig = tope;
    tope = nuevo;
}

void Pila::pop() {
    if (vacia()) {
        cout << "Pila vacia\n";
    } else {
        Nodo* aux = tope;
        cout << "Eliminado: " << aux->dato << endl;
        tope = tope->sig;
        delete aux;
    }
}


void Pila::mostrar() {
    if (vacia()) {
        cout << "Pila vacia\n";
        return;
    }

    Nodo* aux = tope;
    while (aux != NULL) {
        cout << aux->dato << endl;
        aux = aux->sig;
    }
}


bool Pila::vacia() {
    return (tope == NULL);
}

void Pila::vaciar() {
    Nodo* aux;
    while (tope != NULL) {
        aux = tope;
        tope = tope->sig;
        delete aux;
    }
    cout << "Pila vaciada completamente\n";
}

int Pila::tamano() {
    int contador = 0;
    Nodo* aux = tope;

    while (aux != NULL) {
        contador++;
        aux = aux->sig;
    }

    return contador;
}
