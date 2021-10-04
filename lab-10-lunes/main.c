#include <stdio.h>
#include "./juegoGato.h"

char tablero[3][3];
bool ganador = false;
int turnos = 0;

int main(){
    inicializarTablero(tablero);
    imprimirTablero(tablero);    
    while(!ganador && turnos < 9){
        ingresarJugada(turnos, tablero);
        imprimirTablero(tablero);
        ganador = revisarGanador(tablero);
        turnos++;
    }
    return 0;
}