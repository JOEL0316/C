#include <stdio.h>
struct Atleta {
    char deporte[50];
    char nombre[50];
    char pais[50];
    int num_medallas;
};

int main(){
    int i, m_medallas = 0, medallas = 0;;
    struct Atleta At1[10];

    for (i = 0; i < 10; i++) {
        printf("Ingrese el deporte del atleta %d:", i+1);
        scanf("%s",At1[i].deporte);
        printf("Ingrese el nombre del atleta %d:", i+1);
        scanf("%s",At1[i].nombre);
        printf("Ingrese el país del atleta %d:", i+1);
        scanf("%s",At1[i].pais);
        printf("Ingrese el numero de medallas del atleta %d:", i+1);
        scanf("%d",&At1[i].num_medallas);
         
         if (At1[i].num_medallas > m_medallas) {
            m_medallas = At1[i].num_medallas;
            medallas = i;
        }
        printf("\n");
    }
     printf("El atleta con más medallas es:\n");
    printf("Nombre: %s\n", At1[medallas].nombre);
    printf("Deporte: %s\n", At1[medallas].deporte);
    printf("País: %s\n", At1[medallas].pais);
    printf("Número de medallas: %d\n", At1[medallas].num_medallas);
    
    return 0;
}