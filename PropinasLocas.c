#include <stdio.h>

int main(){
    float vcomida, propinapor, total, impuesto, propina;
    int personas;

    printf("Ingrese el Valor de la comida: \n");
    scanf("%f", &vcomida);
    printf("Ingrese el porcentaje de la propina: \n");
    scanf("%f", &propinapor);
    printf("Ingrese el numero de personas: \n");
    scanf("%d", &personas);

    if (vcomida > 5000)
    {
        printf("Se le suma a la comida un impuesto del 19%%: \n");
        impuesto = vcomida + ((vcomida * 19) / 100);
        propina = (propinapor * vcomida) / 100;
        total = propina + impuesto;
        printf("El total es: %.2f\n ", total);
        printf("Cantidad a pagar por persona es: %.2f\n", total / personas);
    }
    else if (vcomida <= 5000 && vcomida >= 2000)
    {
        printf("Se le suma a la comida un impuesto del 16%%: \n");
        impuesto = vcomida + ((vcomida * 16) / 100);
        propina = (propinapor * vcomida) / 100;
        total = propina + impuesto;
        printf("El total es: %.2f\n ", total);
        printf("Cantidad a pagar por persona es: %.2f\n", total / personas);
    }
    else
    {
        printf("Se le suma a la comida un impuesto del 10%%: \n");
        impuesto = vcomida + ((vcomida * 10) / 100);
        propina = (propinapor * vcomida) / 100;
        total = propina + impuesto;
        printf("El total es: %.2f\n ", total);
        printf("Cantidad a pagar por persona es: %.2f\n", total / personas);
    }
    return 0;
}