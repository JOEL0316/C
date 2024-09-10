#include <stdio.h>
#include <string.h>

int main(){
  char palabra[100];
  int x=0;
  int longitud,fin;
  printf("Escribe la palabra :\n");
  scanf("%s",palabra);
  longitud=strlen(palabra);
  for(fin=longitud-1;palabra[fin]==palabra[x] && fin>=0;x++,fin--);
    if(x==longitud){
       printf("\nES PALINDROMO");
    }
   else {
    printf("NO ES PALINDROMO");
   }
    return 0;
}