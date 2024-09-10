#include <stdio.h>
#include <stdlib.h>

int main(){
    int horas;
    int pago;
    int dinero;
    scanf("Ingresa el total de horas trabajadas");
    scanf("%d",&horas);
    scanf("Ingresa el pago por hora");
    scanf("%d",&pago);

    if(horas<=40){
      dinero=pago*horas;
      printf("Su pago es de \n:",dinero);

    }
    else{
        dinero=(horas*pago+(pago*1.5*(horas-40)));
        printf("Su pago en horas extras es %d",dinero);
    
    }
    return 0;
}