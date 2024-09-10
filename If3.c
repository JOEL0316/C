#include <stdio.h>
#include <stdlib.h>
int main(){
int hst;
int ph;
int ss;
printf("Ingresa las horas trabajadas:\n");
scanf("%d",&hst);
printf("Ingresa el precio por hora:\n");
scanf("%d",&ph);

if(hst<=40){
ss=(hst*40);
printf("El sueldo de su semana es de: %d\n",ss);
}
if(hst>40){
ss=(40*ph+(ph*1.5*(hst-40)));
printf("El sueldo de su semana es de: %d\n",ss);
}
printf("Fin del programa...");
    return 0;
}