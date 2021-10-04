// Implementaciones

#include "./pasoDeParametros.h"
#include <stdio.h>

void imprimirMensaje(char opcion){
    printf("Usted está ");
    switch(opcion){
        case 'a': printf("sumando.\n");
                  break;
        case 'b': printf("restando.\n");
                  break;
        default: printf("tratando de hacer una operación inválida.\n");
    }
}

void modificarValor(int numero){
    printf("Valor inicial = %d\n", numero);
    numero = 2 * numero;
    printf("Valor final = %d\n", numero);
}

void modificarValorPorPuntero(int* numero){
    printf("Valor inicial = %d\n", *numero);
    *numero = 2 * (*numero);
    printf("Valor final = %d\n", *numero);
}

void modificarValorPorReferencia(int& numero){
    printf("Valor inicial = %d\n", numero);
    numero = 2 * numero;
    printf("Valor final = %d\n", numero);
}