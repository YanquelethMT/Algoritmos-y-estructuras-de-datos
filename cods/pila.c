#include <stdio.h>

#define MAX 5

int pila[MAX];
int tope = -1;

int vacia() {
    if (tope == -1) {
        return 1;
    } else {
        return 0;
    }
}

int llena() {
    if (tope == MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

void push(int valor) {
    if (llena()) {
        printf("Error: La pila está llena, no se puede insertar %d\n", valor);
        return;
    }
    tope++;
    pila[tope] = valor;
}

int pop() {
    if (vacia()) {
        printf("Error: La pila está vacía, no se puede hacer pop\n");
        return -1;
    }
    int valor = pila[tope];
    tope--;
    return valor;
}



void imprime() {
    if (vacia()) {
        printf("Pila vacía\n");
        return;
    }
    printf("Pila: \n");
    for (int i = tope; i >= 0; i--) {
        printf("%d\n", pila[i]);
    }
    printf("\n");
}


int main() {
	int aux [MAX]={1,2,3,3,5};

	for (int i=0;i<MAX;i++){
		push(aux[i]);
	}

	printf("AUX: ");
	for (int i=0;i<MAX;i++){
		printf("%d ",aux[i]);
	}

	printf("\n\n");
	imprime();

	for (int i=0;i<MAX;i++){
		aux[i]=pop();
	}

	printf("AUX: ");
	for (int i=0;i<MAX;i++){
			printf("%d ",aux[i]);
		}
    return 0;

}

int extras(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

	imprime();
	pop();
	imprime();

	printf("¿La pila está vacía? %d\n", vacia());
	return 0;

}
