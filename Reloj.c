#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
struct  timespec start, end;
double diff;

  clock_gettime(CLOCK_MONOTONIC,&start);
  system("libreoffice --impress");
  clock_gettime(CLOCK_MONOTONIC,&end);

  diff=(end.tv_sec-start.tv_sec) * 100000000000.0 + (end.tv_nsec-start.tv_nsec);
  printf("Ciclos de reloj:%f .\n",diff);


return 0;
}