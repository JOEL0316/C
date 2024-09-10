#include <stdio.h>
#include <stdlib.h>

int main(){
    int x =0;
     int vector[10];
  while(x<10){
   vector[x]=10;
   x++;
  }
  x=0;
  while(x<10){
    printf("%d\n",vector[x]);
    x++;
  }

    return 0;
}