#include <stdio.h>
#include "PROMEDIO.h"

void Promedio::leer(){
    p = num;

    printf("Ingresa 5 numeros:\n");

    for(int i=0;i<5;i++){
        scanf("%f",(p+i));
    }
}

void Promedio::calcular(){
    suma = 0;

    for(int i=0;i<5;i++){
        suma += *(p+i);
    }

    promedio = suma/5;

    max = min = *p;

    for(int i=1;i<5;i++){
        if(*(p+i) > max) max = *(p+i);
        if(*(p+i) < min) min = *(p+i);
    }
}

void Promedio::mostrar(){
    printf("Suma: %.2f\n",suma);
    printf("Promedio: %.2f\n",promedio);
    printf("Maximo: %.2f\n",max);
    printf("Minimo: %.2f\n",min);
}
