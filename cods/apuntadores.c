#include <stdio.h>
#include <string.h>


void F1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int F2(int *arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *(arr + i);
    }
    return suma;
}

void F3(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32;
        }
        str++;
    }
}

void F4(int **p) {
    **p = 999;
}

void F5(int *arr, int elementos) {
    for (int i = 0; i < elementos; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {

    int x = 5, y = 10;
    printf("Antes de F1: x = %d, y = %d\n", x, y);
    F1(&x, &y);
    printf("Después de F1: x = %d, y = %d\n\n", x, y);




    int arreglo[] = {1, 2, 3, 4, 5};
    printf("Resultado de F2: %d\n\n", F2(arreglo, 5));

    char texto[] = "hola barrio";
    printf("Antes de F3: %s\n", texto);
    F3(texto);
    printf("Después de F3: %s\n\n", texto);






    int valor = 100;
    int *ptr = &valor;
    F4(&ptr);
    printf("Resultado de F4: %d\n\n", valor);

    int arregloLineal[] = {10, 20, 30, 40, 50, 60};
    printf("Resultado de F5:\n");
    F5(arregloLineal, 6);

    return 0;
}
