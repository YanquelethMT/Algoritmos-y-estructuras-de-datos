#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nodo {
    int id;
    int dato;
    char nombre[50];
    struct Nodo* next;
} Nodo;





Nodo* nuevo(int id, int dato, const char* nombre) {
    Nodo* nodo = (Nodo*)malloc(sizeof(Nodo));
    nodo->id = id;
    nodo->dato = dato;
    strncpy(nodo->nombre, nombre, 50);
    nodo->next = NULL;
    return nodo;
}









void agrega_final(Nodo** cabecera, int id, int dato, const char* nombre) {
    Nodo* nodo = nuevo(id, dato, nombre);
    if (*cabecera == NULL) {
        *cabecera = nodo;
        return;
    }
    Nodo* temp = *cabecera;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nodo;
}














void agrega_inicio(Nodo** cabecera, int id, int dato, const char* nombre) {
    Nodo* nodo = nuevo(id, dato, nombre);
    nodo->next = *cabecera;
    *cabecera = nodo;
}

void agrega_posicion(Nodo** cabecera, int id, int dato, const char* nombre, int posicion) {
    if (posicion <= 0) {
        agrega_inicio(cabecera, id, dato, nombre);
        return;
    }

    Nodo* nodo = nuevo(id, dato, nombre);
    Nodo* temp = *cabecera;

    for (int i = 0; temp != NULL && i < posicion - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        free(nodo);
        return;
    }

    nodo->next = temp->next;
    temp->next = nodo;
}

void elimina_final(Nodo** cabecera) {
    if (*cabecera == NULL) return;
    if ((*cabecera)->next == NULL) {
        free(*cabecera);
        *cabecera = NULL;
        return;
    }
    Nodo* temp = *cabecera;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void elimina_inicio(Nodo** cabecera) {
    if (*cabecera == NULL) return;
    Nodo* temp = *cabecera;
    *cabecera = (*cabecera)->next;
    free(temp);
}

void elimina_posicion(Nodo** cabecera, int posicion) {
    if (*cabecera == NULL || posicion < 0) return;
    if (posicion == 0) {
        elimina_inicio(cabecera);
        return;
    }

    Nodo* temp = *cabecera;
    for (int i = 0; temp != NULL && i < posicion - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) return;

    Nodo* nodo_a_eliminar = temp->next;
    temp->next = temp->next->next;
    free(nodo_a_eliminar);
}

void muestra(Nodo* cabecera) {
    Nodo* temp = cabecera;
    while (temp != NULL) {
        printf("ID: %d, Dato: %d, Nombre: %s\t->\n", temp->id, temp->dato, temp->nombre);
        temp = temp->next;
    }
    printf("NULL\n");
}

void libera(Nodo* cabecera) {
    Nodo* temp;
    while (cabecera != NULL) {
        temp = cabecera;
        cabecera = cabecera->next;
        free(temp);
    }
}

int main() {
    Nodo* cabecera = NULL;
    int id = 1;

    agrega_final(&cabecera, id++, 50, "Juan");
    agrega_final(&cabecera, id++, 30, "Ana");
    agrega_final(&cabecera, id++, 70, "Luis");
    agrega_final(&cabecera, id++, 20, "Sofia");
    agrega_final(&cabecera, id++, 40, "Carlos");
    agrega_final(&cabecera, id++, 60, "Elena");
    agrega_final(&cabecera, id++, 80, "Mario");

    printf("\nLista inicial:\n");
    muestra(cabecera);

    agrega_inicio(&cabecera, id++, 10, "Lucia");
    printf("\nDespués de agregar al inicio:\n");
    muestra(cabecera);

    agrega_posicion(&cabecera, id++, 35, "Miguel", 3);
    printf("\nDespués de agregar en la posición 3:\n");
    muestra(cabecera);

    elimina_final(&cabecera);
    printf("\nDespués de eliminar el último nodo:\n");
    muestra(cabecera);

    elimina_inicio(&cabecera);
    printf("\nDespués de eliminar el primer nodo:\n");
    muestra(cabecera);

    elimina_posicion(&cabecera, 2);
    printf("\nDespués de eliminar el nodo en la posición 2:\n");
    muestra(cabecera);

    libera(cabecera);

    return 0;
}
