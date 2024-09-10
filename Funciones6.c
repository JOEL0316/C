#include <stdio.h>

int factorial(int n);

int main() {
    int n, fact;
    printf("Ingrese un numero entero para calcular su factorial: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("El factorial de %d es %d\n", n, fact);
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}