#include "BURBUJA.h"
#include <stdio.h>

int main() {
    struct Dato arr[100];
    int n = 0;
    int opcion;
    int ordenado = 0;

    do {
        printf("\n.: Menu Ordenamiento Burbuja :.\n");
        printf("1.- Agregar numero\n");
        printf("2.- Eliminar ultimo numero\n");
        printf("3.- Mostrar numeros\n");
        printf("4.- Ordenar (Burbuja)\n");
        printf("5.- Mostrar ordenados\n");
        printf("6.- Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:
                if(n < 100){
                    printf("Ingresa numero: ");
                    scanf("%d", &arr[n].valor);
                    n++;
                    ordenado = 0;
                } else {
                    printf("Arreglo lleno\n");
                }
                break;

            case 2:
                if(n > 0){
                    n--;
                    printf("Ultimo numero eliminado\n");
                    ordenado = 0;
                } else {
                    printf("No hay elementos para eliminar\n");
                }
                break;

            case 3:
                if(n > 0){
                    printf("Numeros actuales:\n");
                    mostrar(arr, n);
                    printf("\n");
                } else {
                    printf("No hay numeros\n");
                }
                break;


             case 4:
			    if(n > 0){
			        burbujaSort(arr, n);
			        ordenado = 1;
			        printf("Datos ordenados:\n");
			        mostrar(arr, n);
			    } else {
			        printf("No hay datos para ordenar\n");
			    }
			    break;

            case 5:
                if(n > 0 && ordenado){
                    printf("Numeros ordenados:\n");
                    mostrar(arr, n);
                    printf("\n");
                } else if(n > 0){
                    printf("Primero debes ordenar los datos\n");
                } else {
                    printf("No hay numeros\n");
                }
                break;

            case 6:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida\n");
        }

    } while(opcion != 6);

    return 0;
}
