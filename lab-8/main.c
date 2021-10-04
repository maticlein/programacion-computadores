#include <stdio.h>

char tablero[3][3];
int fila;
int columna;
bool ganador = false;
int turnos = 0;



int main(){

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tablero[i][j] = '-';
        }
    }

    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

    while(!ganador && turnos < 9){
        
        if(turnos%2 == 0){
            printf("Jugador X -> Ingrese su jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);

            // PEDIRLE LA JUGADA HASTA QUE ELIJA UNA CASILLA QUE ESTA DISPONIBLE
            // MIENTRAS LA CASILLA ESTE OCUPADA, TENGO QUE PEDIR NUEVAMENTE LA JUGADA

            tablero[fila - 1][columna - 1] = 'X'; 
        } else {
            printf("Jugador O -> Ingrese su jugada de la forma fila,columna:\n");
            scanf("%d,%d", &fila, &columna);
            tablero[fila - 1][columna - 1] = 'O'; 
        }

        printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

        // FILAS
        if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("GANADOR!!");
            ganador = true;
        }
        if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("GANADOR!!");
            ganador = true;
        }
        if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("GANADOR!!");
            ganador = true;
        }

        // COLUMNAS
        if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
            printf("GANADOR!!");
            ganador = true;
        }

        // COMPLETAR LAS DOS COLUMNAS QUE FALTAN
        // EVALUAR LAS DOS DIAGONALES
        // EVITAR QUE UNA JUGADA SE SOBREESCRIBA

        turnos++;
    }




    return 0;
}