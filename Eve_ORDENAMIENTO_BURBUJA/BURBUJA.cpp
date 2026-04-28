#include "BURBUJA.h"
#include <stdio.h>

void burbujaSort(struct Dato arr[], int n) {
    int i, j;
    struct Dato temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].valor > arr[j + 1].valor) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void mostrar(struct Dato arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i].valor);
    }
}
