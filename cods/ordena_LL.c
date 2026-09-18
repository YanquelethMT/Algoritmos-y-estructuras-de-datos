#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
    float valor;
    struct nodo *next;
} Nodo;

Nodo *cabecera = NULL;

Nodo* crearNodo(float valor) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->valor = valor;
    nuevo->next = NULL;
    return nuevo;
}

void inserta(float valor) {
    Nodo *nuevo = crearNodo(valor);
    nuevo->next = cabecera;
    cabecera = nuevo;
}

void imprimirLista() {
    Nodo *actual = cabecera;
    while (actual != NULL) {
        printf("%.2f -> ", actual->valor);
        actual = actual->next;
    }
    printf("NULL\n");
}

void ordena() {
    if (cabecera == NULL || cabecera->next == NULL) return;

    int intercambiado;
    Nodo *actual;
    Nodo *ultimo = NULL;
    do {
        intercambiado = 0;
        actual = cabecera;
        while (actual->next != ultimo) {
            if (actual->valor > actual->next->valor) {
                float temp = actual->valor;
                actual->valor = actual->next->valor;
                actual->next->valor = temp;
                intercambiado = 1;
            }
            actual = actual->next;
        }
        ultimo = actual;
    } while (intercambiado);
}

int main() {
    inserta(7.5);
    inserta(2.3);
    inserta(9.8);
    inserta(5.1);
    inserta(3.4);

    printf("Lista original:\n");
    imprimirLista();

    ordena();

    printf("\nLista ordenada:\n");
    imprimirLista();

    return 0;
}
