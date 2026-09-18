#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int dato;
    struct nodo *siguiente;
} nodo;

void agregar(nodo *arr[], int pos, int valor) {
    nodo *nuevo = malloc(sizeof(nodo));
    nuevo->dato = valor;
    nuevo->siguiente = NULL;

    if (arr[pos] == NULL) {
        arr[pos] = nuevo;
        return;
    }

    nodo *tmp = arr[pos];
    while (tmp->siguiente != NULL) {
        tmp = tmp->siguiente;
    }
    tmp->siguiente = nuevo;
}

int main() {
    nodo *arr[4] = {NULL, NULL, NULL, NULL};

    agregar(arr, 0, 10);
    agregar(arr, 0, 20);
    agregar(arr, 0, 30);
    agregar(arr, 1, 5);
    agregar(arr, 1, 15);

    for (int i = 0; i < 4; i++) {
        nodo *tmp = arr[i];
        printf("arr[%d]: --> ", i);
        while (tmp != NULL) {
        	printf("%d -->", tmp->dato);
            tmp = tmp->siguiente;
        }
        printf("NULL\n");
    }

    return 0;
}
