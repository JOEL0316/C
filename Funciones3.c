#include <stdlib.h>
#include <stdio.h>

void reverseString(char palabra[], int len) {
   int inicio = 0;
   int fin = len - 1;
   char temp;
   while(inicio < fin) {
      temp = palabra[inicio];
      palabra[inicio] = palabra[fin];
      palabra[fin] = temp;
      inicio++;
      fin--;
   }
}

int main() {
   char palabra[100];
   char c;
   int len = 0;

   printf("Introduce una cadena de caracteres: ");

   while((c = getchar()) != ' ' && c != '\n') {
      palabra[len] = c;
      len++;
   }

   reverseString(palabra, len);

   printf("La cadena invertida es: %s\n",palabra);

   return 0;
}