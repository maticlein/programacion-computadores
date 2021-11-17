#include "./juegoGato.h"
#include <stdbool.h>
#include <stdio.h>

// Implementaciones

void inicializarTablero(char tablero[3][3]){
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

void ingresarJugada(int turnos, char tablero[3][3]){
    int fila;
    int columna;
    if(turnos%2 == 0){
            printf("Jugador X -> Ingrese su jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);

            while(tablero[fila - 1][columna - 1] != '-'){
            printf("No seas pill@, vuelve a ingresar tu jugada de la forma fila,columna:\n\n");
            scanf("%d,%d", &fila, &columna);
            }

            tablero[fila - 1][columna - 1] = 'X'; 
        } else {
            printf("Jugador O -> Ingrese su jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);

            while(tablero[fila - 1][columna - 1] != '-'){
            printf("No seas pill@, vuelve a ingresar tu jugada de la forma fila,columna:\n\n");
            scanf("%d,%d", &fila, &columna);
            }

            tablero[fila - 1][columna - 1] = 'O'; 
        }
}

bool revisarGanador(char tablero[3][3]){
    bool ganador = false;
    // FILAS
        if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", tablero[0][0]);
            ganador = true;
        }
        if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", tablero[1][0]);
            ganador = true;
        }
        if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", tablero[2][0]);
            ganador = true;
        }

        // COLUMNAS
        if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", tablero[0][0]);
            ganador = true;
        }
        if((tablero[0][1] == tablero[1][1]) && (tablero[1][1] == tablero[2][1]) && (tablero[0][1] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", tablero[0][1]);
            ganador = true;
        }
        if((tablero[0][2] == tablero[1][2]) && (tablero[1][2] == tablero[2][2]) && (tablero[0][2] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", tablero[0][2]);
            ganador = true;
        }

        // DIAGONALES
        if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", tablero[0][0]);
            ganador = true;
        }
        if((tablero[0][2] == tablero[1][1]) && (tablero[1][1] == tablero[2][0]) && (tablero[0][2] != '-')){
            printf("El ganador es el jugador %c\n\n ¡felicidades!", tablero[0][2]);
            ganador = true;
        }

        return ganador;
}


