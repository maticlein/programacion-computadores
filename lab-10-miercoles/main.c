#include <stdio.h>
#include <stdbool.h>
#include "./juegoGato.h"

char tablero[3][3];
bool ganador = false;
int turnos = 0;

int main(){
    llenarTablero(tablero);
    imprimirTablero(tablero);
    while(!ganador && turnos < 9){
        ingresarJugada(tablero, turnos);
        imprimirTablero(tablero);
        ganador = revisarGanador(tablero);
        turnos++;
    }
    return 0;
}

    //            -c                    -o
    //  ej.cpp   --->   ej.o           --->   ej.exe
    //  printf()        0101101010101           ejecutable

    //                               -o
    // main.cpp      -c   main.o     |    ejecutable
    // libreria.cpp  -c   libreria.o |