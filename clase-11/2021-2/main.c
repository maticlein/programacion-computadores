#include <stdio.h>
#include "juegoGato.h"
#include "calculos.h"

int main(){
    
    char tablero[3][3] = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};
    imprimirTablero(tablero);
    insertarJugada(tablero, 1, 1, 'X');
    insertarJugada(tablero, 1, 2, 'O');
    insertarJugada(tablero, 2, 3, 'X');
    printf("\n");
    imprimirTablero(tablero);
    
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Sumatoria: %i\n", sumatoriaArreglo(numeros, 10));
    return 0;
}