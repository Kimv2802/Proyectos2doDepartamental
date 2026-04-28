#include "QUICK.h"
#include <stdio.h>

void intercambiar(struct Dato *a, struct Dato *b) {
    struct Dato temp = *a;
    *a = *b;
    *b = temp;
}

int particion(struct Dato arr[], int bajo, int alto) {
    int pivote = arr[alto].valor;
    int i = bajo - 1;

    for (int j = bajo; j < alto; j++) {
        if (arr[j].valor < pivote) {
            i++;
            intercambiar(&arr[i], &arr[j]);
        }
    }

    intercambiar(&arr[i + 1], &arr[alto]);
    return i + 1;
}

void quickSort(struct Dato arr[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arr, bajo, alto);
        quickSort(arr, bajo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}
