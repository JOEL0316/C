#include <stdio.h>
#include <stdlib.h>

int main(){
   double a = 5;
   double b = 2;
   double c = 1;
   double d = 4;
   double e;

   printf("El resultado de esta opracion es:\n");
   e=(a+(b/(c/(c+(b/(b-(c/d)))))));
      printf("%f\n",e);
    return 0;
}