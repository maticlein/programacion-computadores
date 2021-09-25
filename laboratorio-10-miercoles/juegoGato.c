#include "./juegoGato.h"
#include <stdio.h>

// Implementaciones
void llenarTablero(char tablero[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tablero[i][j] = '-';
        }
    }
}

void imprimirTablero(char tablero[3][3]){
    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
}

void ingresarJugada(char tablero[3][3], int turnos){
    int fila;
    int columna;
    if(turnos%2 == 0){
            printf("Jugador X -> Ingrese su jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);

            while(tablero[fila - 1][columna - 1] != '-'){
                printf("Casilla ocupada, ingrese nuevamente su jugada:\n");
                scanf("%d,%d", &fila, &columna);
            }
            tablero[fila - 1][columna - 1] = 'X'; 
        } else {
            printf("Jugador O -> Ingrese su jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);
            while(tablero[fila - 1][columna - 1] != '-'){
                printf("Casilla ocupada, ingrese nuevamente su jugada:\n");
                scanf("%d,%d", &fila, &columna);
            }
            tablero[fila - 1][columna - 1] = 'O'; 
        }
}

bool revisarGanador(char tablero[3][3]){
    // FILAS
        if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("GANADOR!!");
            return true;
        }
        if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("GANADOR!!");
            return true;
        }
        if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("GANADOR!!");
            return true;
        }

        // COLUMNAS
        if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
            printf("GANADOR!!");
            return true;
        }
        
        if((tablero[0][1] == tablero[1][1]) && (tablero[1][1] == tablero[2][1]) && (tablero[0][1] != '-')){
            printf("GANADOR!!");
            return true;
        }

        if((tablero[0][2] == tablero[1][2]) && (tablero[1][2] == tablero[2][2]) && (tablero[0][2] != '-')){
            printf("GANADOR!!");
            return true;
        }
  
        // DIAGONALES
         if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
            printf("GANADOR!!");
            return true;
        }

        if((tablero[2][0] == tablero[1][1]) && (tablero[1][1] == tablero[0][2]) && (tablero[2][0] != '-')){
            printf("GANADOR!!");
            return true;
        }
        
        return false;
}