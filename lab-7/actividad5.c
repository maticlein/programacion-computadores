#include <stdio.h>

int main(){
    int numero = 0;
    int sumatoria = 0;
    while(numero >= 0){
        printf("Ingrese un número para sumar: ");
        scanf("%i", &numero);
        if(numero >= 0){
            sumatoria += numero;
        }
    }

    printf("El valor final de la sumatoria es: %i\n", sumatoria);

    return 0;
}