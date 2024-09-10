#include <stdio.h>
#include <math.h>

float calcular_area(float a, float b, float c);

int main(){
    float lado_a, lado_b, lado_c, area;

    printf("Ingrese el lado 1 del triangulo: ");
    scanf("%f", &lado_a);

    printf("Ingrese el lado 2 del triangulo: ");
    scanf("%f", &lado_b);

    printf("Ingrese el lado 3 del triangulo: ");
    scanf("%f", &lado_c);

    area = calcular_area(lado_a, lado_b, lado_c);

    printf("El area del triangulo es: %.2f", area);

    return 0;
}

float calcular_area(float a, float b,float c){
    float z = (a+b+c)/2;
    float area = sqrt(z*(z-a)*(z-b)*(z-c));
    return area;
}