#include <stdio.h>
#include <time.h>

int main() {
    int num;
    printf("Ingrese un número para multiplicar: ");
    scanf("%d", &num);
    
    int* ptr = &num; // apuntador al número ingresado
    
    clock_t start_time = clock(); // tiempo de inicio
    
    for (int i = 1; i <= 100; i++) {
        printf("%d x %d = %d\n", *ptr, i, (*ptr * i));
    }
    
    clock_t end_time = clock(); // tiempo de finalización
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000000000.0; // tiempo de ejecución en segundos
    
    printf("Tiempo de ejecución en ciclos de reloj: %ld\n", (end_time - start_time));
    printf("Tiempo de ejecución en segundos: %f\n", time_taken);
    
    return 0;
}