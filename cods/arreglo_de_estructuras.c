#include <stdio.h>

#define N 3

typedef struct {
    char nombre[50];
    int edad;
    float estatura;
} Persona;

Persona f1() {
    Persona p;
    printf("Nombre: ");
    scanf(" %[^\n]", p.nombre);
    printf("Edad: ");
    scanf("%d", &p.edad);
    printf("Estatura: ");
    scanf("%f", &p.estatura);
    return p;
}

void f2(Persona arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Persona %d\n", i + 1);
        arr[i] = f1();
    }
}

void f3(Persona arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Persona %d\n", i + 1);
        printf("Nombre: %s\n", arr[i].nombre);
        printf("Edad: %d\n", arr[i].edad);
        printf("Estatura: %.2f\n", arr[i].estatura);
    }
}

int main() {
    Persona personas[N];
    f2(personas, N);
    f3(personas, N);
    return 0;
}
