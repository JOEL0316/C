#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[1000];
    char b[1000];
    int x;
 
    printf("Escribe la primer palabra:\n");
    scanf("%s",a);
    printf("Escribe la segunda palabra:\n");
    scanf("%s",b);
    x=strlen(a);
    for(int i=1;i<=x;i++){
        strcat(a,b);
    }
    printf("Resultado:%s",a);
    return 0;
}