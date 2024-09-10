#include <stdlib.h>
#include <stdio.h>

float maximo(float a,float b);
int main(){
   float a,b,Mayor;
     Mayor=maximo(a,b);
   printf("El numero mayor es: %2f",Mayor);
    
  return 0;
}

float maximo(float a,float b){
    float Mayor;
   printf("Ingresa el numero para A:");
   scanf("%f",&a);
    printf("Ingresa el numero para B:");
   scanf("%f",&b);
   if(a>b){
     Mayor = a;
   }
   else{
    Mayor = b;
   }
   return Mayor;
}