#include <stdio.h>

int main(){
    // Declarar e inicializar el tablero
    char tablero[3][3] = {{'X', '-', 'X'}, {'O', 'O', '-'}, {'-', 'X', '-'}};

    // Imprimir el tablero
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }

    // Ingresar una jugada
    int fila = 0;
    int columna = 0;
    printf("\n");
    printf("Por favor ingrese su jugada de la forma X,Y: ");
    scanf("%i,%i", &fila, &columna);

    // Validar la jugada
    while(tablero[fila - 1][columna - 1] != '-'){
        printf("Esta casilla está ocupada!\n");
        printf("Por favor ingrese su jugada de la forma X,Y: ");
        scanf("%i,%i", &fila, &columna);
    }
    // Realizar jugada
    tablero[fila - 1][columna - 1] = 'X';

    // Imprimir el tablero
    printf("\n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
    return 0;
}