#ifndef PROMEDIO_H
#define PROMEDIO_H

struct Dato {
    float valor;
};

class Promedio {

private:
    Dato num[5];
    Dato *p;
    float suma, promedio, max, min;

public:
    void leer();
    void calcular();
    void mostrar();
};

#endif
