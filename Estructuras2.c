#include <stdio.h>
struct empleado{
    char nombre[50];
    char sexo[50];
    char sueldo[50];
};
int main(void){
    struct empleado em;
    printf("Ingresa el nombre del empleado:\n");
    scanf("%s", em.nombre);
     printf("Ingresa el sexo del empleado:\n");
    scanf("%s", em.sexo);
    printf("Ingresa el sueldo del empleado:\n");
    scanf("%s", em.sueldo);

    printf("-------------------------\n");
    printf("Nombre del empleado: %s \n",em.nombre);
    printf("Sexo del empleado: %s \n",em.sexo);
    printf("Sueldo del empleado: $ %s \n",em.sueldo);
}