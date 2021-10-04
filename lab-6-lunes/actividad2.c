#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int numero3;
    printf("Ingrese el primer número:");
    scanf("%i", &numero1);
    printf("Ingrese el segundo número:");
    scanf("%i", &numero2);
    printf("Ingrese el tercer número:");
    scanf("%i", &numero3);
    if((numero1 == numero2) && (numero2 == numero3)){
        printf("Los tres números son iguales.\n");
    } else {
        if((numero1 > numero2) && (numero1 > numero3)){
            printf("El número 1 es el mayor.\n");
        } else if((numero2 > numero1) && (numero2 > numero3)){
            printf("El número 2 es el mayor.\n");
        } else {
            printf("El número 3 es el mayor.\n");
        }
    }
    return 0;
}