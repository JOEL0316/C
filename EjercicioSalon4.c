#include <stdio.h>
#include <stdlib.h>

int main(){
int numero=1;
int a,b;
while(numero<=500){
    a=numero*numero;
    b=numero*numero*numero;
printf("%d %d %d\n",numero,a,b);
numero++;
}
return 0;
}