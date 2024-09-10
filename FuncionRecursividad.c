#include <stdio.h>

int Factorial(int Numero){
    int Resultado;
    if(Numero < 2){
        return 1;
    }
    Resultado = Factorial(Numero - 1) * Numero;
        return Resultado;
}
int main(){
    int N;
    puts("Ingresa un numero:");
    scanf("%d",&N);
    printf("El factorial es: %d\n",Factorial(N));
    return 0;
}