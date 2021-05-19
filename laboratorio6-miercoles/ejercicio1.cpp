#include <stdio.h>

int numero;

int main(){
    // PEDIR UN NÚMERO
    printf("Ingrese un número:\n");
    // LEER EL NÚMERO
    scanf("%d", &numero);
    // VERIFICAR SI ES PAR O IMPAR
    if(numero%2 == 0){
        // ENTREGAR RESPUESTA
        printf("El número es par!\n");
    } else {
        // ENTREGAR RESPUESTA
        printf("El número es impar!\n");
    }
    
    return 0;
}