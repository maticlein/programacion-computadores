#include <stdio.h>

int opcion;

int main(){

    printf("*********************\n");
    printf("------- MENU --------\n");
    printf("*********************\n");
    printf("a.- SUMAR\n");
    printf("b.- RESTAR\n");
    printf("c.- MULTIPLICAR\n");
    printf("d.- DIVIDIR\n");
    printf("Ingrese la opción:\n");
    scanf("%d", &opcion);

    switch(opcion){
        case 1: printf("El usuario quiere sumar.\n");
                break;
        case 2: printf("El usuario quiere restar.\n");
                break;
        case 3: printf("El usuario quiere multiplicar.\n");
                break;
        case 4: printf("El usuario quiere dividir.\n");
                break;
        default: printf("El usuario ingresó una opción que no es válida.\n");
    }

    return 0;
}