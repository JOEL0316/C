#include <stdio.h>
#include <stdlib.h>

int main(){
int antiguedad;
int sueldo;
int x;

printf("Cual es su antiguedad trabajando \n");
scanf("%d",&antiguedad);
printf("Cual es tu sueldo \n");
scanf("%d",&sueldo);
x=(sueldo*100)/10;
if(antiguedad>5){
if(x>1000){
printf("Si eres sujeto a credito hipotecario:\n");
}
else{
   printf("NO eres apto para solicitar el credito:\n"); 
}
}
    return 0;
}