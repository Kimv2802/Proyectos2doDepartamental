#include "BURBUJA.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Cantidad de numeros: \n");
    scanf("%d", &n);

    struct Dato arr[100];

    for (int i = 0; i < n; i++) {
        printf("Numero %d: \n", i + 1);
        scanf("%d", &arr[i].valor);
    }

    burbujaSort(arr, n);

    printf("Ordenado: \n");
    mostrar(arr, n);
    
    system("pause");
    return 0;
}
