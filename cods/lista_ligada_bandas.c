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

void agregarNodo(Nodo** cabecera,char nombre[],char genero[],int anio, int inte){
    Nodo* nuevo = crearNodo(nombre, genero, anio,  inte);
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
        printf("Nombre: %s\nGenero: %s\naño: %d\ninte: %d\n->\n ", actual->Nombre,actual->Genero,actual->anio_forma,actual->num_inte);
        actual = actual->siguiente;
    }
    printf("NULL\n");
}

int main() {
    Nodo* cabecera = NULL;
    Nodo* cabecera2 = NULL;

    agregarNodo(&cabecera, "Queen","Rock Clasico", 1970, 4);
    agregarNodo(&cabecera, "Metallica","Trash Metal", 1981, 4);
    agregarNodo(&cabecera, "Nirvana","Grunge", 1987, 3);
    agregarNodo(&cabecera, "Linkin Park"," Nu metal", 1996, 6);


    mostrarLista(cabecera);

    return 0;
}
