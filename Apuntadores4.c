#include <stdio.h>

int *p,y;
void func(){
    int x=40;
    p=&x;
    y=*p;
    *p=23;
}
int main(void){
    func();
    y=*p;
    *p=25;
    printf("El valor de y es :%d\n",y);
    printf("El valor de *p es:%d\n",*p);
    printf("El valor de p es :%p",p);
}
    
