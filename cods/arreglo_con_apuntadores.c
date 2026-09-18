#include <stdio.h>

int main() {
    int arreglo[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int *aux = &arreglo[0][0];

    printf("Valores iniciales:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(aux + i * 3 + j));
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            *(aux + i + j * 3 ) += i + j*3 ;
        }
    }

    printf("\nValores modificados:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(aux + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}

/*#include <stdio.h>

int main() {
    char cadena[] = "Hola mundo";
    char *aux = cadena;

    while (*aux != '\0') {
        printf("%c ", *aux);
        aux++;
    }

    return 0;
}
*/




