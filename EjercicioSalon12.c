#include <stdio.h>
#include <stdlib.h>

int main(){
     
  int vector[100];
  int x=0;
  int z;
  while(z<=100){
    x=x+2;
    vector[z]=x;
    printf("2*%d=%d\n",z,vector[z]);
    z++;
    
  }

    return 0;
}