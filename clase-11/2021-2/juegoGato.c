#include "juegoGato.h"
#include <stdio.h>

// Implementaciones
void imprimirTablero(char tablero[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
}

void insertarJugada(char tablero[3][3], int fila, int columna, char signo){
    tablero[fila - 1][columna - 1] = signo;
}