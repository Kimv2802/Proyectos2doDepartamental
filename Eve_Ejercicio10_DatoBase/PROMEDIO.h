#ifndef PROMEDIO_H
#define PROMEDIO_H

class Promedio {

private:
    float num[5];
    float *p;
    float suma, promedio, max, min;

public:
    void leer();
    void calcular();
    void mostrar();
};

#endif
