#include <stdio.h>
int main() {
int i, numero;
long factorial = 1;
printf("Ingrese un número: \n");
scanf("%d", &numero);

for(i = 1; i <= numero; i++ ) {
 factorial = factorial * i;
} 

printf("%d! = %ld\n", numero, factorial);
return 0;
} 