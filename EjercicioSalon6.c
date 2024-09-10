#include <stdio.h>
#include <stdlib.h>

int main(){
   int x=0;
   int d,d2;
   while(x<1000){
   d=(x%2);
   d2=(x%7);
   if(d==0 && d2==0){
    printf("%d\n",x);
   }
   x++;
   }
    return 0;
}