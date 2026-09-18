#include <stdio.h>

#define MAX 5

int vacia(int tope);
int llena(int tope);
void encolar(int cola[], int *tope, int valor);
int desencolar(int cola[], int *tope);
void imprime(int cola[], int tope);

int main() {
    int cola[MAX];
    int tope = -1;

    printf("Encolando 6 elementos\n");
    encolar(cola, &tope, 10);
    encolar(cola, &tope, 20);
    encolar(cola, &tope, 30);
    encolar(cola, &tope, 40);
    encolar(cola, &tope, 50);
    encolar(cola, &tope, 60);

    imprime(cola, tope);

    printf("Sacando: %d\n", desencolar(cola, &tope));
    imprime(cola, tope);

    printf("Sacando: %d\n", desencolar(cola, &tope));
    imprime(cola, tope);

    return 0;
}

int vacia(int tope) {
    if (tope == -1) {
        return 1;
    } else {
        return 0;
    }
}

int llena(int tope) {
    return (tope == MAX - 1);
}

void encolar(int cola[], int *tope, int valor) {
    if (llena(*tope)) {
        printf("Error: La cola está llena, no se puede insertar %d\n", valor);
        return;
    }
    (*tope)++;
    cola[*tope] = valor;
    printf("Encolado: %d\n", valor);
}

int desencolar(int cola[], int *tope) {
    if (vacia(*tope)) {
        printf("Error: La cola está vacía, no se puede hacer dequeue\n");
        return -1;
    }

    int valor = cola[0];
    for (int i = 0; i < *tope; i++) {
        cola[i] = cola[i + 1];
    }

    (*tope)--;
    return valor;
}

void imprime(int cola[], int tope) {
    if (vacia(tope)) {
        printf("Cola vacía\n");
        return;
    }
    printf("Cola: ");
    for (int i = 0; i <= tope; i++) {
        printf("%d, ", cola[i]);
    }
    printf("\n");
}
