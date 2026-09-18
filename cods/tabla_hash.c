#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_TABLA 10

typedef struct nodo {
    int dato1;
    float dato2;
    char dato3[20];
    struct nodo *next;
} nodo;

int hash(int d1, float d2, char d3[]) {
	int indice;
    indice=((int)(d1*d2*d2))% TAM_TABLA;
    return indice;
}



nodo *crear_nodo(int d1, float d2, char d3[]) {
    nodo *nuevo = malloc(sizeof(nodo));

    nuevo->dato1 = d1;
    nuevo->dato2 = d2;
    strncpy(nuevo->dato3, d3, 20);
    nuevo->next = NULL;

    return nuevo;
}

void imprimir_tabla(nodo *tabla[]) {
    for (int i = 0; i < TAM_TABLA; i++) {
        nodo *tmp = tabla[i];
        printf("tabla[%d]: --> ", i);
        while (tmp != NULL) {
            printf("(%d, %.2f, %s) --> ",
                   tmp->dato1,
                   tmp->dato2,
                   tmp->dato3);
            tmp = tmp->next;
        }
        printf("NULL\n");
    }
}

int main() {

    // Declaración de la tabla hash como un arreglo de punteros a nodo,
    // inicializada completamente en NULL (tabla vacía)
    nodo *tabla[TAM_TABLA] = {NULL};

    // Creación dinámica de un nodo con:
    // dato1 = 15, dato2 = 3.5, dato3 = "Juan"
    nodo *nuevo = crear_nodo(15, 3.5, "Juan");

    // Cálculo del índice dentro de la tabla usando la función hash
    // (se obtiene la posición donde se almacenará el nodo)
    int indice = hash(nuevo->dato1, nuevo->dato2, nuevo->dato3);

    // Inserción directa del nodo en la posición calculada
    // (sin manejo de colisiones en este fragmento)
    tabla[indice] = nuevo;

    //ACTIVIDAD!!!!!!!!
    /*
     * 1. CREAR UN NODO CON LOS ATRIBUTOS QUE TU DESEES
     * 2. OBTEN LA POSICION DEL NODO CON LA FUNCION HASH
     * 3. INSERTA EL NODO EN LA POSICION DONDE INDICA LA FUNCION HAS
     * 4. REPITE LOS PASOS [1-3] 10 VECES (CADA NODO CON ATRIBUTOS DIFERENTES)...
     *
     * 5. QUE NOTAS?
     * 6. QUE ES UNA COLISION?
     * 7. COMO SE PODRIA HACER EL MANEJO DE COLISIONES?
     * 8. IMPLEMENTALO EN CODIGO QUE REALIZASTE
     * 		EL VIERNES DE LA S6
     *
     * NOTA: SE RECOMIENDA AMPLIAMENTE ESTUDIAR ESTE TEMA,
     * SERA TU ACCESO A LA CHAMPIONS
     *
     */


    // Impresión del contenido completo de la tabla hash
    imprimir_tabla(tabla);

    return 0;
}
