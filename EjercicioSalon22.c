#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n;
    printf("Ingresa el rango para n:");
    scanf("%d",&n);
    printf("Ingresa el rango para m:");
    scanf("%d",&m);

    for(int x=1;x<=m;x++){
       for(int y=1;y<=n;y++){
        printf("%d\t",x*y);
       
    }
    printf("\n");
    }
    return 0;
}