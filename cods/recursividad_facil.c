#include <stdio.h>





int suma_n(int n) {
    if (n == 0) return 0;
    return n + suma_n(n - 1);
}

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int arr[] = {1, 2, 3, 2};

int contar(int arr[], int size, int valor) {
    if (size == 0) return 0;
    if (arr[0] == valor) return 1 +
    		contar(arr + 1, size - 1, valor);
    return contar(arr + 1, size - 1, valor);
}


int main() {
    int n = 5;
    printf("Suma de 1 a %d = %d\n", n, suma_n(n));
    printf("Factorial de %d = %d\n", n, factorial(n));

    int arr[] = {1, 2, 3, 2, 2, 4};
    int size = 6;
    int valor = 2;
    printf("El valor %d aparece %d veces en el arreglo.\n",
           valor, contar(arr, size, valor));

    return 0;
}



