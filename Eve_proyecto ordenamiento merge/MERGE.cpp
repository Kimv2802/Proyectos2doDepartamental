#include "MERGE.h"
#include <stdio.h>

void merge(struct Dato arr[], int izq, int mid, int der) {
    int i, j, k;
    int n1 = mid - izq + 1;
    int n2 = der - mid;

    struct Dato L[100], R[100];

    for (i = 0; i < n1; i++)
        L[i] = arr[izq + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0; j = 0; k = izq;

    while (i < n1 && j < n2) {
        if (L[i].valor <= R[j].valor) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k++] = L[i++];
    }

    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(struct Dato arr[], int izq, int der) {
    if (izq < der) {
        int mid = (izq + der) / 2;
        mergeSort(arr, izq, mid);
        mergeSort(arr, mid + 1, der);
        merge(arr, izq, mid, der);
    }
}
