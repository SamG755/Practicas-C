#include <stdio.h>

int main(){
    float cap1, cap2, cap3, liq1, liq2, liq3;

    printf("Ingrese la capacidad que van a tener las botellas\n");
    scanf("%f %f %f", &cap1, &cap2, &cap3);

    printf("Ingrese el liquido que va a tener cada botella\n");
    scanf("%f %f %f", &liq1, &liq2, &liq3);

    liq2 = liq2 + (liq1 / 2);
    liq1 = liq1 / 2;
    liq3 = liq3 + liq2;
    liq2 = 0;
    liq1 = liq1 + (liq3 / 3);
    liq3 = liq3 - (liq3 / 3);

    printf("La Capacidad de la primera botella es: %.1f y su cantidad actual es: %.1f\n", cap1, liq1);
    printf("La Capacidad de la segunda botella es: %.1f y su cantidad actual es: %.1f\n", cap2, liq2);
    printf("La Capacidad de la tercera botella es: %.1f y su cantidad actual es: %.1f\n", cap3, liq3);

    return 0;
}