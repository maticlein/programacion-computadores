#include "libreria.h"
#include <stdio.h>

// Implementaciones
int sumaDosNumeros(int numero1, int numero2){
    int resultado = numero1 + numero2;
    return resultado;
}

void imprimirSaludo(){
    printf("Hola qué tal!?\n");
}

void cuadradoNumeroPorValor(int numero){
    numero = numero * numero;
}

void cuadradoNumeroPorReferencia(int* numero){
    *numero = (*numero) * (*numero);
}