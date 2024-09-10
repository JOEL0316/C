#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=0;
    int d2;
    while (x<1000){
        d2=(x%7);
        if(d2!=0){
         printf("%d\n",x);
        }
        x++;
    }
    
    return 0;
}