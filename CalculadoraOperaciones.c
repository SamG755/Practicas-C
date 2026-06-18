#include <stdio.h>
#include <stdbool.h>
int main() {
 float a, b, resultado;
 char operador;
 
 printf("Ingrese la operación incluyendo el operador: \n");
 scanf("%f %c %f", &a, &operador, &b);
 
 switch (operador) {
   case '+':
     resultado = a + b;
     printf("%.2f + %.2f = %.2f\n", a, b, resultado);
     break;
   case '-':
     resultado = a - b;
     printf("%.2f - %.2f = %.2f\n", a, b, resultado);
     break;
   case '*':
     resultado = a * b;
     printf("%.2f * %.2f = %.2f\n", a, b, resultado);
     break;
   case '/':
     if (b != 0)
     {
        resultado = a / b;
        printf("%.2f / %.2f = %.2f\n", a, b, resultado);
     }
     else
     {
        printf("Error: Division por cero\n");
     }
     break;
   default:
     printf("Operador no Valido\n");
 } 
return 0;
} 