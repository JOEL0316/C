#include <stdio.h>
#include <stdlib.h>

int main(){
   int x=0;
   int z;
   int y;
   while (x<1000){
   z=(x%2);
   y=(x%7);
   if(z==0 && y==0){
  printf("%d\n",x);
   }
   x++;
   }
   
    return 0;

}