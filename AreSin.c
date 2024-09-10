#include <stdio.h>
#include <math.h>
#include <time.h>
#define pi 3.1416

int main(){
    struct timespec start, end;
    double diff;
    clock_gettime(CLOCK_MONOTONIC,&start);
    float Area = 0;
    float Radio;
    puts("Ingresa el radio del circulo: ");
    scanf("%f",&Radio);
    Area = pi * pow(Radio,2);
    printf("El area del circulo es: %.2f\n",Area);

    clock_gettime(CLOCK_MONOTONIC,&end);
    diff=(end.tv_sec-start.tv_sec)*1000000000.0 + (end.tv_nsec - start.tv_nsec);
    printf("Ciclos de reloj: %.f\n",diff);
    return 0;
}