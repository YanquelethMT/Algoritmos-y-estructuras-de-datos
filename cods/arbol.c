#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* izq;
    struct Nodo* der;
};

struct Nodo* nuevoNodo(int dato) {
    struct Nodo* nodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nodo->dato = dato;
    nodo->izq = NULL;
    nodo->der = NULL;
    return nodo;
}

struct Nodo* insertar(struct Nodo* raiz, int dato) {
    if (raiz == NULL)
        return nuevoNodo(dato);

    if (dato < raiz->dato)
        raiz->izq = insertar(raiz->izq, dato);
    else
        raiz->der = insertar(raiz->der, dato);

    return raiz;
}

void inOrder(struct Nodo* raiz) {
    if (raiz != NULL) {
        inOrder(raiz->izq);
        printf("%d ", raiz->dato);
        inOrder(raiz->der);
    }
}

int main() {
    struct Nodo* raiz = NULL;

    raiz = insertar(raiz, 8);
    raiz = insertar(raiz, 3);
    raiz = insertar(raiz, 10);
    raiz = insertar(raiz, 1);
    raiz = insertar(raiz, 6);

    printf("Recorrido In-Order: ");
    inOrder(raiz);

    return 0;
}
