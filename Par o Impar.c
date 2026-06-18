#include <stdio.h>

int main() {
int num;

printf("Ingrese un numero para evaluar si es Par o Impar");
scanf("%d", &num);

if (num % 2 == 0)
{
    printf("El numero %d es Par \n", num);
} else
{
    printf("El numreo %d es Impar \n", num);
}

return 0;

}