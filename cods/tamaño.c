#include <stdio.h>

int main() {
    int enteros[] = {10, 20, 30, 40, 50};
    float decimales[] = {1.1, 2.2, 3.3};
    char letras[] = {'a', 'b', 'c', 'd'};

    int tam_ent = sizeof(enteros) / sizeof(enteros[0]);
    int tam_dec = sizeof(decimales) / sizeof(decimales[0]);
    int tam_let = sizeof(letras) / sizeof(letras[0]);

    printf("Arreglo de enteros:\n");
    printf("  Elementos: %d\n", tam_ent);
    printf("  Tamaño total: %lu bytes (%lu bits)\n", sizeof(enteros), sizeof(enteros) * 8);
    printf("  Tamaño de un elemento: %lu bytes (%lu bits)\n", sizeof(enteros[0]), sizeof(enteros[0]) * 8);
    printf("  Contenido: ");
    for (int i = 0; i < tam_ent; i++) {
        printf("%d ", enteros[i]);
    }
    printf("\n\n");

    printf("Arreglo de floats:\n");
    printf("  Elementos: %d\n", tam_dec);
    printf("  Tamaño total: %lu bytes (%lu bits)\n", sizeof(decimales), sizeof(decimales) * 8);
    printf("  Tamaño de un elemento: %lu bytes (%lu bits)\n", sizeof(decimales[0]), sizeof(decimales[0]) * 8);
    printf("  Contenido: ");
    for (int i = 0; i < tam_dec; i++) {
        printf("%.2f ", decimales[i]);
    }
    printf("\n\n");

    printf("Arreglo de chars:\n");
    printf("  Elementos: %d\n", tam_let);
    printf("  Tamaño total: %lu bytes (%lu bits)\n", sizeof(letras), sizeof(letras) * 8);
    printf("  Tamaño de un elemento: %lu bytes (%lu bits)\n", sizeof(letras[0]), sizeof(letras[0]) * 8);
    printf("  Contenido: ");
    for (int i = 0; i < tam_let; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

    return 0;
}
