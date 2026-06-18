#include<stdio.h>

int main()
{
    int num1, num2, resultado;
    
    printf("Ingrese el primer número \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo número \n");
    scanf("%d", &num2);
    
    resultado = num1 + num2;
    
    printf("La suma de %d y %d es: %d\n", num1, num2, resultado);
    return 0;
}