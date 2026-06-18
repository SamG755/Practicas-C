#include<stdio.h>

int main()
{
      int a, b, mayor;
      
      printf("ingresa dos números: ");
      scanf("%d %d", &a, &b);
      if (a>b) {
      mayor = a;
      } else {
      mayor = b;
      } 
      printf("El mayor es: %d\n", mayor);
      return 0;
}