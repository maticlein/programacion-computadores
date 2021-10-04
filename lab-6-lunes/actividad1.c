#include <stdio.h>

int main(){
    // Variable
    int numero;
    // Pedir número
    printf("Ingrese un número:\n");
    // Guardar número
    scanf("%d", &numero);
    // Evaluar si es par o no
    if(numero%2 == 0 ){
        printf("ES PAR!\n");
    } else {
        printf("ES IMPAR!\n");
    }
    return 0;
}