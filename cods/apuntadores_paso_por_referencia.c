#include <stdio.h>

int main() {
    float x = 10;
    float* ptr = &x;

    printf("Valor de x: %f\n", x);
    printf("Dirección de x: %p\n", &x);
    printf("Valor de ptr: %p\n", ptr);
    printf("Contenido en la dirección que apunta ptr: %f\n\n", *ptr);

    int numero = 25;
    int* puntero = NULL;

    printf("Valor inicial de numero: %d\n", numero);

    puntero = &numero;
    *puntero = 99;

    printf("Nuevo valor de numero (modificado por el apuntador): %d\n\n"
    		, numero);

    char letra = 'A';
    char* pLetra = NULL;

    printf("Valor inicial de letra: %c\n", letra);

    pLetra = &letra;
    *pLetra = *pLetra+32;

    printf("Nuevo valor de letra (modificado por el apuntador): %c\n"
    		, letra);

    return 0;
}







