#include <stdio.h>

int main(){
    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;
    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1);
    printf("Ingrese el segundo número:\n");
    scanf("%d", &numero2);
    resultado = numero1 + numero2;
    printf("El resultado de la suma entre %d y %d es: %d\n", numero1, numero2, resultado);
    return 0;
}