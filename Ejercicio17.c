#include <stdio.h>
#include <stdlib.h>

int main(){
   double a = 1;
   double b = 3;
   double c = 5;
   double d = 23;
   double e = 30;
   double z;
   printf("El resulatado de la operacion es:\n");
   z=((a/b)+(b/c)+(a/e)/(d/e));
   printf("%f\n",z);
    return 0;
}