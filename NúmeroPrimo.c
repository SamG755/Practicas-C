#include <stdio.h>
#include <stdbool.h>
int main() {
 int numero, i;
 bool esprimo = true;
 printf("Ingrese un número: ");
 scanf("%d", &numero);
 
 if (numero <= 1) {
 esprimo = false;
 } 
 else {
 for(i = 2; i * i <= numero; i++) {
 if (numero % i == 0) {
 esprimo = false;
 break;
 }
 } 
 } 
 
 if (esprimo) {
 printf("%d es primo\n", numero);
 } else {
 printf("%d no es primo\n", numero);
 } 
 
return 0;
} 