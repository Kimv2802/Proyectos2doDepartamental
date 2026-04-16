#include "PROMEDIO.h"
#include <stdio.h>

void Promedio::leer(){
    p = num;

    printf("Ingresa 5 numeros:\n");

    for(int i=0;i<5;i++){
        scanf("%f",&(p+i)->valor);
    }
}

void Promedio::calcular(){
    suma = 0;

    for(int i=0;i<5;i++){
        suma += (p+i)->valor;
    }

    promedio = suma/5;

    max = min = p->valor;

    for(int i=1;i<5;i++){
        if((p+i)->valor > max)
            max = (p+i)->valor;

        if((p+i)->valor < min)
            min = (p+i)->valor;
    }
}

void Promedio::mostrar(){
    printf("Suma: %.2f\n",suma);
    printf("Promedio: %.2f\n",promedio);
    printf("Maximo: %.2f\n",max);
    printf("Minimo: %.2f\n",min);
}
