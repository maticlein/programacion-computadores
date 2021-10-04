#include <stdio.h>

int main(){
    int opcion = 0;

    // Pantalla de inicio
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
    printf("----- Software de Ayuda Matemática -----\n");
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
    
    // Bienvenida y menú
    printf("Bienvenido!\n");
    printf("Este software cuenta con las siguientes opciones:\n");
    printf("1.- Operaciones básicas\n");
    printf("2.- Cálculo de pendiente de una recta\n");
    printf("3.- Distancia entre dos puntos\n");
    printf("4.- Solucionador de ecuaciones cuadráticas\n");
    printf("5.- Triángulos\n");
    printf("6.- Salir\n");
    
    // Ingresar la opción
    printf("Por favor seleccione una opción:");
    scanf("%i", &opcion);

    // Ejecutar una acción dependiendo de la opción elegida 
    switch(opcion){
        case 1: printf("Operaciones básicas\n");
                break;
        case 2: printf("Cálculo de pendiente de una recta\n");
                break;
        case 3: printf("Distancia entre dos puntos\n");
                break;
        case 4: printf("Solucionador de ecuaciones cuadráticas\n");
                break;
        case 5: printf("Triángulos\n");
                break;
        case 6: printf("Salir\n");
                break;
        default: printf("La opción ingresada no es válida!\n");
    }

    return 0;
}