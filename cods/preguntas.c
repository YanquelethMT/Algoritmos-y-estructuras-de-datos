#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nodo {
    char texto[100];
    struct Nodo* si;
    struct Nodo* no;
} Nodo;

Nodo* crearNodo(const char* texto) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    strcpy(nuevo->texto, texto);
    nuevo->si = NULL;
    nuevo->no = NULL;
    return nuevo;
}

void jugar(Nodo* nodo) {
    int respuesta;
    if (nodo->si == NULL && nodo->no == NULL) {
        printf("¿Estás pensando en: %s? (1 = sí, 0 = no): ", nodo->texto);
        scanf("%d", &respuesta);
        if (respuesta == 1) {
            printf("¡Adiviné!\n");
        } else {
            printf("¡Oh no! Me equivoqué.\n");
        }
        return;
    }

    printf("%s (1 = sí, 0 = no): ", nodo->texto);
    scanf("%d", &respuesta);

    if (respuesta == 1 && nodo->si != NULL) {
        jugar(nodo->si);
    } else if (respuesta == 0 && nodo->no != NULL) {
        jugar(nodo->no);
    } else {
        printf("Respuesta inválida o rama no definida.\n");
    }
}

int main() {
    Nodo* raiz = crearNodo("¿Es un ser vivo?");
    raiz->si = crearNodo("¿Es un animal?");
    raiz->no = crearNodo("¿Se usa a diario?");


    printf("¡Piensa en algo y responde con 1 (sí) o 0 (no)!\n");
    jugar(raiz);

    return 0;
}
