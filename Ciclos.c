#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    // Código a medir
    int sum = 0;
    for (int i = 1; i <= 1000000; i++) {
        sum += i;
    }

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC * 1000;

    printf("Tiempo de ejecución: %f milisegundos\n", cpu_time_used);

    return 0;
}