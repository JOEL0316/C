#include <stdio.h>
#include <time.h>

#define PI 3.1416

// Función que calcula el área de un círculo sin apuntadores
double area_circulo(double radio) {
    return PI * radio * radio;
}

// Función que calcula el área de un círculo con apuntadores
void area_circulo_ptr(double radio, double *area) {
    *area = PI * radio * radio;
}

int main() {
    double radio = 5.0;
    double area = 0.0;
    clock_t inicio, fin;
    double tiempo_sin_ptr, tiempo_con_ptr;

    // Medición del tiempo sin apuntadores
    inicio = clock();
    area = area_circulo(radio);
    fin = clock();
    tiempo_sin_ptr = (double)(fin - inicio) / CLOCKS_PER_SEC * 1000000000.0;

    // Medición del tiempo con apuntadores
    inicio = clock();
    area_circulo_ptr(radio, &area);
    fin = clock();
    tiempo_con_ptr = (double)(fin - inicio) / CLOCKS_PER_SEC * 1000000000.0;

    printf("Área del círculo sin apuntadores: %f\n", area);
    printf("Tiempo de ejecución sin apuntadores: %f ciclos de reloj\n", tiempo_sin_ptr * CLOCKS_PER_SEC);
    printf("Área del círculo con apuntadores: %f\n", area);
    printf("Tiempo de ejecución con apuntadores: %f ciclos de reloj\n", tiempo_con_ptr * CLOCKS_PER_SEC);

    return 0;
}
