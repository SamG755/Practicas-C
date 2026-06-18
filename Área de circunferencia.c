#include<stdio.h>

int main()
{
    float radio, area;
    const float PI = 3.14159;
    printf("Ingrese el Radio: ");
    scanf("%f", &radio);
    
    area = PI * radio * radio;
    printf("El área es: %.5f\n", area);
    return 0;
}