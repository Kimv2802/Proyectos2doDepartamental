#ifndef PUNTEROS_H
#define PUNTEROS_H

struct Nodo {
    int dato;
    Nodo* sig;
};

class Pila {
private:
    Nodo* tope;

public:
    Pila();
    ~Pila();

    void push(int val);
    void pop();
    void mostrar();
    bool vacia();

    void vaciar();   
    int tamano();    
};

#endif
