# include <stdio.h>

struct CD{
    char titulo[100];
    char artista[100];
    int num_canciones;
    char año[100];
    char precio[100];
};
int main(void){
    struct CD cd1;
    printf("Ingresa el titulo\n");
    scanf("%s",cd1.titulo);
      printf("Ingresa el numero de canciones\n");
    scanf("%s",cd1.num_canciones);
      printf("Ingresa el año\n");
    scanf("%s",cd1.año);
      printf("Ingresa el precio\n");
    scanf("%s\n",cd1.precio);
     
    printf("%s\n",cd1.titulo);
     printf("%s\n",cd1.num_canciones);
     printf("%s\n",cd1.año);
    printf("%s\n",cd1.precio);


    return 0;
}