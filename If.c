#include <stdio.h>
#include <stdlib.h>

int main(){
float x;

printf("Escribe tu calificacion:\n");
scanf("%f",&x);
if(x>8){
    printf("FELICIDADES APROBASTE EL CURSO:\n");
}
else{
    printf("TU CALIFICACION NO ES APROBATORIA:");
}
    return 0;
}