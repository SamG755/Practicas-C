#include <stdio.h>

int main() {
    int arr[] = {23, 45, 12, 67, 34, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]); // muestra la cantidad de elementos arrays
    int buscar, encontrado = -1;
    printf("La cantidad de elemntos del arrays es: %d\n", n);
    
    printf("Elemento a buscar: ");
    scanf("%d", &buscar);
    
    for (int i = 0; i < n; i++){
        if (arr[i] == buscar) {
            encontrado = i;
            break;
        }
    }
    if (encontrado != -1)
    printf("Elemento %d encontrado en posicion %d\n", buscar, encontrado);
    else
    printf("El Elemento %d no encontrado\n", buscar);
    
    return 0;
}