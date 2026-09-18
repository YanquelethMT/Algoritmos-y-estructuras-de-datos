#include <stdio.h>

int arr[] = {5, 3, 8, 6, 2, 4, -2, 3, 0, 1};
int n = sizeof(arr) / sizeof(arr[0]);
int ix=0;

void burbuja();
void mostrar();

void burbuja() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                ix=ix+1;
            }
        }
        mostrar();
    }
}

void mostrar() {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    printf("Arreglo original: \n");
    mostrar();

    burbuja();

    printf("Arreglo ordenado: \n");
    mostrar();

    printf("%d",ix);

    return 0;
}
