#include <stdio.h>

int numero;

int main(){
    // PEDIR NÚMERO
    printf("Ingrese un número:\n");
    // LEER NÚMERO
    scanf("%d", &numero);
    // EVALUAMOS SI ES PAR O IMPAR
    if(numero%2 == 0 ){
        printf("ES PAR!\n");
    } else {
        printf("ES IMPAR!\n");
    }
    return 0;
}