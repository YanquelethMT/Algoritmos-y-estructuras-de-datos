#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int dato;
    struct Nodo* siguiente;
} Nodo;

Nodo* crear_nodo(int dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->siguiente = NULL;
    return nuevo;
}

int sumar_lista(Nodo* cabecera) {
    if (cabecera == NULL) return 0;
    return cabecera->dato + sumar_lista(cabecera->siguiente);
}

int main() {
    Nodo* cabecera = crear_nodo(1);
    cabecera->siguiente = crear_nodo(2);
    cabecera->siguiente->siguiente = crear_nodo(3);
    cabecera->siguiente->siguiente->siguiente = crear_nodo(4);

    printf("Suma de la lista = %d\n", sumar_lista(cabecera));

    return 0;
}
