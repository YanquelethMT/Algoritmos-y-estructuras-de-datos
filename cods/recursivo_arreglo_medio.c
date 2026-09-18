#include <stdio.h>




int arr[] = {5, 12, 7, 3, 18, 9};
int n = 6;

int SR(int arr[], int n) {
    if (n == 0)
        return 0;

    return arr[n-1] + SR(arr, n-1);
}


int SI(int arr[], int n) {
    int suma = 0;

    for(int i = 0; i < n; i++)
        suma += arr[i];

    return suma;
}




int arr[] = {5,  9};
int n = 2;

int MR(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int maxPrevio = MR(arr, n-1);

    if (arr[n-1] > maxPrevio)
        return arr[n-1];
    else
        return maxPrevio;
}




int MI(int arr[], int n) {
    int max = arr[0];

    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];

    return max;
}


int arr[] = {5, 12, 7, 3, 18, 9};
int inicio=0;
int n = 6;
int fin=n-1;

void IR(int arr[], int inicio, int fin) {
    if (inicio >= fin)
        return;

    int temp = arr[inicio];
    arr[inicio] = arr[fin];
    arr[fin] = temp;

    IR(arr, inicio+1, fin-1);
}








void II(int arr[], int n) {
    int inicio = 0;
    int fin = n - 1;

    while(inicio < fin) {
        int temp = arr[inicio];
        arr[inicio] = arr[fin];
        arr[fin] = temp;

        inicio++;
        fin--;
    }
}

void imprimirArreglo(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {

    int arr[] = {5, 12, 7, 3, 18, 9};
    int n = 6;

    printf("Arreglo original:\n");
    imprimirArreglo(arr, n);

    printf("\nSuma iterativa: %d\n", SI(arr, n));
    printf("Suma recursiva: %d\n", SR(arr, n));

    printf("\nMaximo iterativo: %d\n", MI(arr, n));
    printf("Maximo recursivo: %d\n", MR(arr, n));

    II(arr, n);
    printf("\nArreglo invertido (iterativo):\n");
    imprimirArreglo(arr, n);

    IR(arr, 0, n-1);
    printf("\nArreglo invertido nuevamente (recursivo):\n");
    imprimirArreglo(arr, n);

    return 0;
}
