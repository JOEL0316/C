#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=0;
    int d;
    while(x<1000){
    d=(x%3);
    if(d==0){
    printf("%d\n",x);
    }
    x++;
    }
    return 0;
}