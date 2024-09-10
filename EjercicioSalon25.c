#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int len;
    char cad[10];

    printf("Escribe una palabra:\n");
    scanf("%s",cad);
      len=strlen(cad);
   for(int i=1;i<=len;i++){
    for(int j=1;j<=len;j++){
       printf("*\t");
    }
   printf("\n");
   }
     
    return 0;
}