#include <stdio.h>

struct empleado {
    char nombre[30];
    char sexo;
    float sueldo;
};

int main() {
    struct empleado emp[5];
    int i, menor_sueldo;

    // Recopilar información de los empleados
    for(i = 0; i < 5; i++) {
          printf("---------------------------------\n");
        printf("Ingresa la información del empleado %d:\n", i+1);
        printf("Ingresa el nombre del empleado: ");
        scanf("%s", emp[i].nombre);
        printf("Ingresa el sexo del empleado (M o F): ");
        scanf(" %c", &emp[i].sexo);
        printf("Ingresa el sueldo del empleado: ");
        scanf("%f", &emp[i].sueldo);
    }

    // Encontrar empleado con menor sueldo
    menor_sueldo = 0;
    for(i = 1; i < 5; i++) {
        if(emp[i].sueldo < emp[menor_sueldo].sueldo)
            menor_sueldo = i;
    }

    // Mostrar información del empleado con el menor sueldo
    printf("-------------------------------\n");
    printf("Empleado con el menor sueldo:\n");
    printf("Nombre: %s\n", emp[menor_sueldo].nombre);
    printf("Sexo: %c\n", emp[menor_sueldo].sexo);
    printf("Sueldo: %.2f\n", emp[menor_sueldo].sueldo);

    return 0;
}