#include "QUICK.h"
#include <stdio.h>
#include "quick.h"

void mostrar(struct Dato arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i].valor);
    }
}

int main() {
    int n;

    printf("Cantidad de numeros: ");
    scanf("%d", &n);

    struct Dato arr[100];

    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &arr[i].valor);
    }

    quickSort(arr, 0, n - 1);

    printf("Ordenado: ");
    mostrar(arr, n);

    return 0;
}
