#include <stdio.h>

#define TAM 10

int tabla[TAM] = {15, 3, 8, 22, 7, 9, 1, 19, 12, 5};
int clave = 7;

int busqueda_1() {
    for (int i = 0; i < TAM; i++) {
        if (tabla[i] == clave)
            return i;
    }
    return -1;
}

int main() {
    int resultado = busqueda_1();

    if (resultado != -1)
        printf("Elemento %d encontrado en la posición %d.\n", clave, resultado);
    else
        printf("Elemento %d no encontrado.\n", clave);

    return 0;
}
