#include <stdio.h>
int main(){
    char jugador_inicial = 0;


    printf("-------------------------\n");
    printf("-------------------------\n");
    printf("------- CONECTA 4 -------\n");
    printf("-------------------------\n");
    printf("-------------------------\n");

    printf("Seleccione quien inicia el juego, A (amarillo) o R (rojo): ");
    scanf("%c", &jugador_inicial);
    
    switch(jugador_inicial){
        case 'A': printf("Jugador inicial: %c\n", jugador_inicial);
                  printf("Parte el jugador amarillo!\n");
                  break;
        case 'R': printf("Jugador inicial: %c\n", jugador_inicial);
                  printf("Parte el jugador rojo!\n");
                  break;
        default: printf("La opción ingresada no es válida!\n");
    }
    
    return 0;
}