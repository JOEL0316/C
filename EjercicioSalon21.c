#include <stdio.h>

int main(){
    int N;
    int i;
    int j;

    printf("Ingresa un numero:");
    scanf("%d", &N);
    for(i=N;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}