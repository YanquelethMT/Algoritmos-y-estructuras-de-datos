#include <stdio.h>
#include <stdlib.h>

#define TAM 30

typedef struct Nodo {
    int dato;
    char Nombre [TAM];

    struct Nodo* siguiente;
} Nodo;

Nodo* crearNodo(int dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

void agregarNodo(Nodo** cabecera, int dato) {
    Nodo* nuevo = crearNodo(dato);
    if (*cabecera == NULL) {
        *cabecera = nuevo;
    } else {
        Nodo* actual = *cabecera;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo;
    }
}

void mostrarLista(Nodo* cabecera) {
    Nodo* actual = cabecera;
    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
}

int main() {
    Nodo* cabecera = NULL;

    agregarNodo(&cabecera, 10);
    agregarNodo(&cabecera, 20);
    agregarNodo(&cabecera, 30);

    mostrarLista(cabecera);

    return 0;
}
