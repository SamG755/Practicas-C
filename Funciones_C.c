#include <stdio.h>
#include <stdbool.h>
int obtenerNumeros();
bool esPositivo (int num);
int calculaDoradoble (int num);
int calculadoraTriple (int num);
void mostrarMenu ();
void procesarOpcion (int opcion, int num);

int main(){
   int numero, opcion;
   
   printf("Programar con Funciones \n\n");
   
   numero = obtenerNumeros();
   
   //verifica si el numero es valido positivo
   
   if (esPositivo(numero) == false) {
       printf("Error: Debe ingresar un numero positivo \n");
       return 1;
   }
  
mostrarMenu();
printf("Elige una opcion: ");
scanf("%d", &opcion);

procesarOpcion(opcion, numero);
    return 0;
}

//funcion que solicita y retorna un numero

int obtenerNumeros() {
    int num;
    printf("Ingrese un numero positivo: ");
    scanf("%d", &num);
    return num;
}

//funcion que verifica si un numero es positivo

bool esPositivo(int num) {
    return (num > 0);
}

//funcion que calcula el doble

int calculaDoradoble(int num) {
    return num*2;
}

//funcion que calcula el Triple

int calculadoraTriple(int num) {
    return num*3;
}

//funcion que muestra menu de opciones

void mostrarMenu() {
    printf("\n--- Menu de Opciones ---\n");
    printf("1. calcular el doble\n");
    printf("2. Calcular el Triple\n");
    printf("3. Mostrar el numero Original\n");
    printf("-----------------------------\n");
}

//funcion que comenta la opcion elegida por el usuario

void procesarOpcion(int opcion, int num) {
    int resultado;
    switch(opcion) {
        case 1:
        resultado = calculaDoradoble(num);
        printf("El doble es %d es: %d\n", num, resultado);
        break;
        
        case 2:
        resultado = calculadoraTriple(num);
        printf("El triple es %d es: %d\n", num, resultado);
        break;
        
        case 3:
        printf("El numero ingresado es: %d\n", num);
        break;
        
        default:
        printf("Opcion no valida\n");
        break;
    }
    
}