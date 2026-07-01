#include <stdio.h>
int main(){
    int num, dig1, dig2, dig3, dig4;

    printf("Ingrese un Numero de 4 cifras: \n");
    do {
        scanf("%d", &num);
       if (num <= 999 || num >= 10000) {
        printf("El numero %d no es de 4 cifras \n", num);
       }
    } while (num <= 999 || num >= 10000);
    
    dig4 = num % 10;
    dig3 = (num / 10) % 10;
    dig2 = (num / 100) % 10;
    dig1 = (num / 1000) % 10;

    printf("%d %d %d %d\n", dig1, dig2, dig3, dig4);
    printf("  %d %d   \n", dig2, dig3);
    printf("   %d    \n", dig3);
    printf("  %d %d   \n", dig2, dig3);
    printf("%d %d %d %d\n", dig1, dig2, dig3, dig4);

}