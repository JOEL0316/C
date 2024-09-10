#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int i;
    int contador;

printf("Escribe el valor del numero");
scanf("%d",&numero);

   for(i=1;i<=numero;i++){
     contador=contador+i;
     printf("%d\n",contador);
   }
    return 0;
}