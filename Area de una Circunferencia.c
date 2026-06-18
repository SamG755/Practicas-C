#include <stdio.h>
  
int radio, i;
float area, mayor;
const float PI = 3.141593;

int main() {
  printf("Ingrese El Radio de la Circunferencia: ");
  scanf("%d", &radio);

  area = PI * radio * radio;
  
  printf("El area es: %.2f\n", area);

  i = 1;

  while (i <= 10)
  {
    printf("La tabla de multiplicar de %d x %d = %d\n", radio, i, radio * i);
    i++;
  }
  
  if (area > radio * 10) 
  {
    mayor = area;
  } 
  else 
  {
    mayor = radio * 10;
  }

  printf("El Mayor entre el radio por 10 y el area es: %.2f\n", mayor);

  return 0;
}
