#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int len;
char x[100];
char y[100];
char z[100];
char w[100];
printf("Ingresa la palabra 1:");
scanf("%s",x);
printf("Ingresa la palabra 2:");
scanf("%s",y);


 strcpy(z,x);
 strcpy(w,y);

printf("Palabra 1: %s %s\n",x,w);
printf("Palabra 2: %s %s\n",y,z);

    return 0;
}