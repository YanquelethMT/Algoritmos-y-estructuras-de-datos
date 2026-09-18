#include <stdio.h>


int arr[] = {9, 4, 7, 1, 3};
int n = sizeof(arr) / sizeof(arr[0]);

void selection();
void mostrar();


void selection() {
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
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

    selection();

    printf("Arreglo ordenado: \n");
    mostrar();

    return 0;
}
