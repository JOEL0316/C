#include <stdio.h>
#include <stdlib.h>

int main(){
     
  int vector[100];
  int x=100;
  while(x>0){
    vector[x]=x;
    printf("%d\n",vector[x]);
    x--;
    
  }

    return 0;
}