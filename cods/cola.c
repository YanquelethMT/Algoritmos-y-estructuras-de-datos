#include <stdio.h>

#define MAX 5

int cola[MAX];
int tope = -1;

int vacia() {
	if (tope == -1){
		return 1;
	}else{
	    return 0;
	}
}

int llena() {
    return (tope == MAX - 1);
}

void encolar(int valor) {
    if (llena()) {
        printf("Error: La cola está llena, no se puede insertar %d\n", valor);
        return;
    }
    tope++;                  // Avanza el tope
    cola[tope] = valor;      // Inserta el valor
    printf("Encolado: %d\n", valor);
}

int desencolar() {
    if (vacia()) {
        printf("Error: La cola está vacía, no se puede hacer dequeue\n");
        return -1;
    }

    int valor = cola[0];  // Toma el primer elemento
    // Desplaza los elementos hacia adelante
    for (int i = 0; i < tope; i++) {
        cola[i] = cola[i + 1];
    }

    tope--;  // Disminuye el tope
    return valor;
}

void imprime() {
    if (vacia()) {
        printf("Cola vacía\n");
        return;
    }
    printf("Cola: ");
    for (int i = 0; i <= tope; i++) {
        printf("%d, ", cola[i]);
    }
    printf("\n");
}

int main() {
    printf("Encolando 6 elementos\n");
    encolar(10);
    encolar(20);
    encolar(30);
    encolar(40);
    encolar(50);
    encolar(60);  // Este no entra (cola llena)

    imprime();

    printf("Sacando: %d\n", desencolar());
    imprime();

    printf("Sacando: %d\n", desencolar());
    imprime();

    return 0;
}
