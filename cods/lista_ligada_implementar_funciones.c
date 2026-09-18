#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TAM 30

typedef struct Nodo {
    int anio_forma;
    int num_inte;
    char Nombre [TAM];
    char Genero [TAM];

    struct Nodo* siguiente;
} Nodo;

Nodo* crearNodo(char nombre[],char genero[],int anio, int inte) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->anio_forma= anio;
    nuevo->num_inte= inte;
    nuevo->siguiente = NULL;
    strncpy(nuevo->Nombre, nombre, 30);
    strncpy(nuevo->Genero, genero, 30);

    return nuevo;
}


void mostrarLista(Nodo* cabecera) {
    Nodo* actual = cabecera;
    printf("cabecera ->\n");

    while (actual != NULL) {
        printf("Nombre: %s\nGenero: %s\naño: %d\ninte: %d\n->\n",
        		actual->Nombre,actual->Genero,actual->anio_forma,actual->num_inte);
        actual = actual->siguiente;
    }
    printf("NULL\n");
    printf("\n");
}

void insertarInicio(Nodo** cabecera, char nombre[], char genero[], int anio, int inte) {
    Nodo* nuevo = crearNodo(nombre, genero, anio, inte);

    nuevo->siguiente = *cabecera;
    *cabecera = nuevo;
}


int main() {
    Nodo* cabecera = NULL;

    insertarInicio(&cabecera, "Queen", "Rock Clasico", 1970, 4);
    insertarInicio(&cabecera, "Metallica", "Trash Metal", 1981, 4);
    insertarInicio(&cabecera, "Nirvana", "Grunge", 1987, 3);
    insertarInicio(&cabecera, "Linkin Park", "Nu Metal", 1996, 6);

    mostrarLista(cabecera);

    return 0;
}
