#include <stdio.h>

int arr[] = {9, 4, 7, 1, 3, 4, -2, 0, 8, 1};
int n = sizeof(arr) / sizeof(arr[0]);

void imprimirArreglo();
void insertion_sort();


void insertion_sort() {
    for (int i = 1; i < n; i++) {
        int actual = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > actual) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = actual;
        imprimirArreglo();
    }
}

void imprimirArreglo() {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    printf("Arreglo original: \n");
    imprimirArreglo();

    insertion_sort();

    printf("Arreglo ordenado: \n");
    imprimirArreglo();
    return 0;
}
