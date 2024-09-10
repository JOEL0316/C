#include <stdio.h>
#include <math.h>
#include <time.h>
#define PI 3.1416

int main(){
    struct timespec start, end;
    double diff;
    clock_gettime(CLOCK_MONOTONIC,&start);
    float *Numero;
    float Radio, Total = 0;
    puts("Ingresa el area del circulo: ");
    scanf("%f",&Radio);
    Total = PI * pow(Radio,2);
    Numero =&Total;
    
    printf("El area del circulo es: %.2f\n",*Numero);
    clock_gettime(CLOCK_MONOTONIC,&end);
    diff=(end.tv_sec-start.tv_sec)*1000000000.0 + (end.tv_nsec - start.tv_nsec);
    printf("Ciclos de reloj: %.f\n",diff);
    return 0;
}