#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generar_arreglo(int arr[], int tamaño) {
    int i = 0;

    while (i < tamaño) {
        int num = rand() % 31;
        arr[i]=num;

        i++;
    }

    for (int i = 0; i < tamaño - 1; i++) {
        for (int j = 0; j < tamaño - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int busqueda_binaria(int arr[], int tamaño, int objetivo) {
    int inicio = 0, fin = tamaño - 1;

    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arr[medio] == objetivo)
            return medio;
        else if (arr[medio] < objetivo)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }

    return -1;
}

int main() {
    srand(time(NULL));

    int tamaño=rand()%40+1;
    int arreglo[tamaño];
    generar_arreglo(arreglo, tamaño);

    printf("Arreglo generado (%d elementos):\n", tamaño);
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    int objetivo = rand() % 31;
    printf("Buscando el número: %d\n", objetivo);

    int resultado = busqueda_binaria(arreglo, tamaño, objetivo);

    if (resultado != -1) {
        printf("El número %d se encuentra en la posición %d.\n", objetivo, resultado);
    } else {
        printf("El número %d no está en el arreglo.\n", objetivo);
    }

    return 0;
}
