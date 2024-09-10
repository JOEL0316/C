#include <stdio.h>
/*Este algoritmo crea una variable entera "num" con el valor 1 y 
luego utiliza un puntero "p" para acceder a los bytes individuales 
de la variable. Si el byte menos significativo 
(el primer byte en el caso de little endian) es igual a 1, 
entonces el ordenamiento de bytes es little endian. De lo contrario, 
es big endian.

El algoritmo imprime "Little endian" o "Big endian" 
en función del resultado de la comprobación.*/

int main(){
int num=0;
char*p=(char*)&num;
if(*p==1){
    printf("ES LITTLE ENDIAN\n");
}
else{
    printf("ES BIG ENDIAN\n");
}
    return 0;
}