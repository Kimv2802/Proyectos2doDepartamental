#ifndef ARREGLO_H
#define ARREGLO_H

#define MAX 5

class Pila {
private:
    int datos[MAX];
    int tope;

public:
    Pila();
    void push(int val);
    void pop();
    void mostrar();

    bool estaVacia();
    int tamano();
    void vaciar();
};

#endif
