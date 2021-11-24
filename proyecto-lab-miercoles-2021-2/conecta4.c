// Implementaciones
#include "conecta4.h"
#include <stdio.h>
#include <stdlib.h>

void imprimirPantallaInicio(){
    printf("-------------------------\n");
    printf("-------------------------\n");
    printf("------- CONECTA 4 -------\n");
    printf("-------------------------\n");
    printf("-------------------------\n");
}


void inicializarTablero(char tablero[6][7]){
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            tablero[i][j] = 'O';
        }
    }
}

void imprimirTablero(char tablero[6][7]){
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
}

void ingresarJugada(int* columna){
    printf("Por favor ingrese la columna de su jugada: ");
    scanf("%i", columna);
}

int validarJugada(int jugada){
    while((jugada < 1) || (jugada > 7)){
        system("clear");
        printf("Acaba de ingresar una jugada que no es válida, por favor ingrese nuevamente: ");
        scanf("%i", &jugada);
    }
    return jugada;
}