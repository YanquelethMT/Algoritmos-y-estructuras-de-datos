#include <stdio.h>

int factorial_recursivo(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial_recursivo(n - 1);
}

int factorial_iterativo(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) resultado *= i;
    return resultado;
}

int main() {
    int n = 5;
    printf("Factorial recursivo de %d = %d\n"
    		, n, factorial_recursivo(n));
    printf("Factorial iterativo de %d = %d\n"
    		, n, factorial_iterativo(n));
    return 0;
}
