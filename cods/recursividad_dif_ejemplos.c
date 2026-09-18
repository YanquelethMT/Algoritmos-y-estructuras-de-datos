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

int contar_nodos(Nodo* cabecera) {
    if (cabecera == NULL) return 0;
    return 1 + contar_nodos(cabecera->siguiente);
}

int buscar_valor(Nodo* cabecera, int valor) {
    if (cabecera == NULL) return 0;
    if (cabecera->dato == valor) return 1;
    return buscar_valor(cabecera->siguiente, valor);
}

int main() {
    Nodo* cabecera = crear_nodo(10);
    cabecera->siguiente = crear_nodo(20);
    cabecera->siguiente->siguiente = crear_nodo(30);
    cabecera->siguiente->siguiente->siguiente = crear_nodo(40);

    printf("Cantidad de nodos = %d\n", contar_nodos(cabecera));
    printf("¿Está el 30? %d\n", buscar_valor(cabecera, 30));
    printf("¿Está el 99? %d\n", buscar_valor(cabecera, 99));

    return 0;
}
