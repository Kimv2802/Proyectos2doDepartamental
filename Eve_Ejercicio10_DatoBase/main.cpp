#include "PROMEDIO.h"
#include <stdio.h>

int main(){

    Promedio p;
    int opcion;
    int leido = 0, calculado = 0;

    do{
        printf("\n.: Menu de Promedio (Arreglo + Puntero) :.\n");
        printf("1.- Leer datos\n");
        printf("2.- Calcular\n");
        printf("3.- Mostrar resultados\n");
        printf("4.- Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                p.leer();
                leido = 1;
                calculado = 0;
                break;

            case 2:
                if(leido){
                    p.calcular();
                    calculado = 1;
                } else {
                    printf("Primero debes leer los datos\n");
                }
                break;

            case 3:
                if(calculado){
                    p.mostrar();
                } else {
                    printf("Primero debes calcular\n");
                }
                break;

            case 4:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida\n");
        }

    }while(opcion != 4);

    return 0;
}
