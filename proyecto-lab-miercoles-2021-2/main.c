#include <stdio.h>
#include <stdlib.h>

int main(){
    char jugador_inicial = 0;
    char tablero[6][7];
    int columna = 0;

    // Pantalla de inicio
    printf("-------------------------\n");
    printf("-------------------------\n");
    printf("------- CONECTA 4 -------\n");
    printf("-------------------------\n");
    printf("-------------------------\n");

    // Inicializar e imprimir el tablero
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            tablero[i][j] = 'O';
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }

    printf("Por favor ingrese la columna de su jugada: ");
    scanf("%i", &columna);

    // Validar la jugada
    while((columna < 1) || (columna > 7)){
        system("clear");
        printf("Acaba de ingresar una jugada que no es válida, por favor ingrese nuevamente: ");
        scanf("%i", &columna);
    }

    tablero[5][columna - 1] = 'R';
    system("clear");

    // Imprimir el tablero
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}