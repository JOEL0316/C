#include <stdio.h>
#include <stdlib.h>

int main(){
int array[10]={1,2,3,4,5,6,7,8,9,0};
int len=sizeof(array)/sizeof(int);
printf("Los bytes del arreglo son: %ld\n",sizeof(array));
printf("Cada entero tiene: %ld bytes\n",sizeof(int));
printf("El arrego tiene %ld elementos\n",sizeof(len));
    return 0;
}