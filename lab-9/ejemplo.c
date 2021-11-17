#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void imprimirTablero(char tablero[3][3]);
bool mayorEdad(int edad);

int main(int argc, char*argv[]){
    printf("%d\n", atoi(argv[1]));

    char tablero[3][3] = {{'-', '-', '-'},
                          {'-', '-', '-'},
                          {'-', '-', '-'}};
    int fila;
    int columna;


    if(mayorEdad(20)){
        printf("Es mayor de edad!\n");
    } else {
        printf("Es menor de edad!\n");
    }

    printf("Ingrese su jugada de la forma fila,columna: ");
    scanf("%d,%d", &fila, &columna);
    tablero[fila - 1][columna - 1] = 'X';

    // Impresión del tablero
    imprimirTablero(tablero);


    return 0;
}

void imprimirTablero(char tablero[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
}

bool mayorEdad(int edad){
    if(edad >= 18){
        return true;
    } else {
        return false;
    }
}