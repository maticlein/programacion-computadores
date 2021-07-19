#include <stdio.h>
#include "./pasoDeParametros.h"

int main(){
    imprimirMensaje('a');
    int variable = 5;
    // Paso de parámetro por valor
    modificarValor(variable);
    printf("%d\n", variable);
    // Paso de parámetro por referencia a través de puntero
    modificarValorPorPuntero(&variable);
    printf("%d\n", variable);
    // Paso de parámetro por referencia
    modificarValorPorReferencia(variable);
    printf("%d\n", variable);
    return 0;
}