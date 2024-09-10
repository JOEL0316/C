#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    __clock_t start,end;
    double cpu_time_used;

    start=clock();
    //SELECCION DE CODIGO A MEDIR
    for(int i=0;i<1000000;i++){
        //Codigo aqui
      /*  int opcion;
printf("--------VIOLENTOMETRO--------\n");
printf("Seleccione una accion del violentometro por la que estas pasando\n");
printf("1.Bromas hirientes\n");
printf("2.Chantajear\n");
printf("3.Mentir,angañar\n");
printf("4.Ignorar,ley del hielo\n");
printf("5.Celar\n");
printf("6.Culpabilizar\n");
printf("7.Descalificar\n");
printf("8.Ridiculizar,ofender\n");
printf("9.Humillar en publico\n");
printf("10.Intimidar,amenazar\n");
printf("11.Controlar,prohibir\n");
printf("12.Destrir articulos personales\n");
printf("13.Manosear\n");
printf("14.Caricias agresivas\n");
printf("15.Golpear jugando\n");
printf("16.Pellizcar,arañar\n");
printf("17.Empujar,jalonear\n");
printf("18.Cachetear\n");
printf("19.Patear\n");
printf("20.Patear\n");
printf("21.Encerrar,aislar\n");
printf("22.Amenazar con objetos o armas\n");
printf("23.Forzar una relaciónsexual\n");
printf("24.Abuso sexual\n");
printf("25.Violar\n");
printf("26.Mutilar\n");
printf("27.Asesinar\n");
printf("\n");
scanf("%d",&opcion);
 
if(opcion >=1 && opcion <9){
printf("Estas en la primer fase\n");
printf("¡¡La violencia aumentara!!.\n");
printf("Date cuenta antes de que empeore\n");
}
else if(opcion >= 9 && opcion <21){
printf("Estas en la segunda fase\n");
printf("¡¡Reacciona,no te dejes!!.\n");
printf("Piensa si en verdad te mereces eso\n");
}
else if(opcion >=21 && opcion <28){
printf("Estas en la tercer fase y ultima :(\n");
printf("¡¡Necesitas ayuda profesional!!\n");
printf("Llama al 911,y ya ponte al tiro,quierete tantito\n");
}*/
    }
    end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;

    printf("Tiempo de ejecucion en ciclos de reloj:%f\n",cpu_time_used);
     return 0;
}