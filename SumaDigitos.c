#include <stdio.h>
int main() {
 int numero, suma = 0, digito;
 
 printf("Ingrese un Número: \n");
 scanf("%d", &numero);
 int original = numero;
 
 while(numero != 0) {
  digito = numero % 10;
  suma = suma + digito;
  numero = numero / 10;
 }
 
 printf("La suma de los dígitos de %d es: %d\n", original, suma);
 
return 0;
} 