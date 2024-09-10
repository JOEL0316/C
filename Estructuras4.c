/*Realiza un programa en C que almacene y muestre la informacion de un atleta 
(Deporte, Nombre, Pais, Numero de medallas)*/

#include <stdio.h>
struct Informacion{
    char Deporte[20];
     char Nombre[20];  
      char Pais[20];   
       char Medallas[20];  
};
int main(void){
    struct Informacion AB;
  
    puts("Ingresa el deporte que practicas:");
    scanf("%s",AB.Deporte);
    puts("Escribe tu nombre: ");
    scanf("%s",AB.Nombre);
    puts("Ingresa tu pais de donde vienes: ");
    scanf("%s",AB.Pais);
    puts("Escribe las medallas que has ganado: ");
    scanf("%s",AB.Medallas);
    // Impresion de datos
    printf("---------------------\n");
    printf("Deporte: %s\n",AB.Deporte);
    printf("Nombre: %s\n",AB.Nombre);
    printf("Pais: %s\n",AB.Pais);
    printf("Medallas: %s\n",AB.Medallas);
    
    return 0;
}