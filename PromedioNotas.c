#include <stdio.h>
int main() {
 float n1, n2, n3, promedio;
 printf("Ingrese las notas del módulo: \n");
 scanf("%f %f %f", &n1, &n2, &n3);
 
 promedio = (n1 + n2 + n3) / 3;
 
 if (promedio >= 10) {
 printf("Aprobado con promedio: %.2f\n", promedio);
 } else {
 printf("Reprobado con promedio: %.2f\n", promedio);
 } 
 
return 0;
} 