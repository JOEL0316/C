#include <stdio.h>
#include <string.h>

int main(){
char a[1000];
int i,j;
int longitud;
int contador=0;
 
    printf("Escribe la palabra:\n");
    scanf("%s",a);
    longitud=strlen(a);
    printf("%s\n",a);
    for(i=97;i<=122;i++){
        for(j=0;j<=longitud;j++){
            if(a[j]==i){
                contador++;
            }
        }
        if(contador==0){
            continue;
        }
        else{
            printf("La letra %c se repite %d veces\n",i,contador);
            contador=0;
        }
    }
    return 0;
}
