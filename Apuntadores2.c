#include <stdio.h>

int main(){

int dato;
int *punt;
punt=&dato;

printf("La direccion del dato es: %p\n",&dato);
printf("La direccion de punt es: %d\n",&punt);
printf("La direccion de punt es: %d\n",*punt);

    return 0;
}