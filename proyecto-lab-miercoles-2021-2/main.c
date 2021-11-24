#include <stdio.h>
#include <stdlib.h>
#include "conecta4.h"

int main(){
    char jugador_inicial = 0;
    char tablero[6][7];
    int columna = 0;
    imprimirPantallaInicio();
    inicializarTablero(tablero);
    imprimirTablero(tablero);
    ingresarJugada(&columna);
    printf("Variable: %i\n", columna);
    columna = validarJugada(columna);
    tablero[5][columna - 1] = 'R';
    system("clear");
    imprimirTablero(tablero);
    return 0;
}