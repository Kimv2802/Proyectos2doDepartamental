#include "QUICK.h"
#include <stdio.h>

void mostrar(struct Dato arr[], int n) {
    if (n == 0) {
        printf("El arreglo esta vacio\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i].valor);
    }
    printf("\n");
}

int main() {
    struct Dato arr[100];
    int n = 0;
    int opcion, valor;

    do {
        printf("MENU \n");
        printf("1. Agregar elemento\n");
        printf("2. Quitar elemento\n");
        printf("3. Mostrar ordenamiento (Quick Sort)\n");
        printf("4. Vaciar completamente\n");
        printf("5. Verificar si esta vacio\n");
        printf("6. Mostrar tamanio\n");
        printf("7. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
                if (n < 100) {
                    printf("Ingrese numero: ");
                    scanf("%d", &valor);
                    arr[n].valor = valor;
                    n++;
                } else {
                    printf("Arreglo lleno\n");
                }
                break;

            case 2:
                if (n > 0) {
                    n--; 
                    printf("Elemento eliminado\n");
                } else {
                    printf("No hay elementos para eliminar\n");
                }
                break;

            case 3:
                if (n > 0) {
                    quickSort(arr, 0, n - 1);
                    printf("Ordenado: ");
                    mostrar(arr, n);
                } else {
                    printf("El arreglo esta vacio\n");
                }
                break;

            case 4:
                n = 0;
                printf("Arreglo vaciado\n");
                break;

            case 5:
                if (n == 0) {
                    printf("El arreglo esta vacio\n");
                } else {
                    printf("El arreglo NO esta vacio\n");
                }
                break;

            case 6:
                printf("Tamanio: %d\n", n);
                break;

            case 7:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida\n");
        }

    } while (opcion != 7);

    return 0;
}
