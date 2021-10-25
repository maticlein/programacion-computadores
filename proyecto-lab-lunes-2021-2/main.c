#include <stdio.h>
#include <stdlib.h>

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
    printf("Por favor seleccione una opción: ");
    scanf("%i", &opcion);

    // Validar el dato
    while((opcion < 1) || (opcion > 6)){
        system("clear");
        printf("Opción inválida por favor ingrese nuevamente: ");
        scanf("%i", &opcion);
    }

    // Ejecutar una acción dependiendo de la opción elegida 
    switch(opcion){
        case 1: system("clear");
                printf("Operaciones básicas\n");
                printf("1.- Suma\n");
                printf("2.- Resta\n");
                printf("3.- Multiplicación\n");
                printf("4.- División\n");
                printf("Por favor seleccione una opción: ");
                scanf("%i", &opcion);
                // Validar
                while((opcion < 1) || (opcion > 4)){
                        system("clear");
                        printf("Opción inválida por favor ingrese nuevamente: ");
                        scanf("%i", &opcion);
                }
                switch(opcion){
                        case 1: system("clear");
                                printf("Suma\n");
                                break;
                        case 2: system("clear");
                                printf("Resta\n");
                                break;
                        case 3: system("clear");
                                printf("Multiplicación\n");
                                break;
                        case 4: system("clear");
                                printf("División\n");
                                break;
                        default: printf("La opción ingresada no es válida!\n");
                }
                break;
        case 2: system("clear");
                printf("Cálculo de pendiente de una recta\n");
                break;
        case 3: system("clear");
                printf("Distancia entre dos puntos\n");
                break;
        case 4: system("clear");
                printf("Solucionador de ecuaciones cuadráticas\n");
                break;
        case 5: system("clear");
                printf("Triángulos\n");
                break;
        case 6: system("clear");
                printf("Salir\n");
                break;
        default: printf("La opción ingresada no es válida!\n");
    }

    return 0;
}