#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

int main() {
    Nodo* cabecera = NULL;

    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = 10;
    nuevo->siguiente = NULL;

    cabecera = nuevo;

    nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->siguiente = NULL;
    nuevo->dato = 20;
    nuevo->siguiente = cabecera;

    cabecera=nuevo;

    Nodo* actual = cabecera;
    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");

    return 0;
}
