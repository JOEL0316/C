#include <stdio.h>
#include <stdlib.h>

int main(){

  int vector[20];
  int x=1;
  int y=0;
  int multiplicacion=0;
  int promedio;
  int divicion=0;

   while(x<=20){
    printf("Digita el valor de la posicion");
    scanf("%d ",&vector[x]);
   multiplicacion=multiplicacion*vector[x];
   promedio=promedio+vector[x];
   divicion=promedio/20;
   x++;
   }
   printf("%d\n",multiplicacion);
   printf("%d\n",divicion);
    return 0;
}