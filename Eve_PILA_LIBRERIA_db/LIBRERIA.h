#ifndef LIBRERIA_H
#define LIBRERIA_H
#include <stack>
using namespace std;

class Pila {
private:
    stack<int> pila;

public:
    void push(int val);
    void pop();
    void mostrar();
    bool vacia();

    int tamanio();     
    void vaciar();    
};

#endif
