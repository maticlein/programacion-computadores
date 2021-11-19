// Implementaciones
#include "arreglosNumericos.h"
#include <stdio.h>

void pedirOpcion(int* opcion, int menor, int mayor){
    do{
    printf("Ingrese la opción:\n");
    scanf("%d", opcion);
    } while((*opcion < menor) || (*opcion > mayor) );
}

void pedirNumerosArreglo(int arreglo[], int elementos){
    for(int i = 0 ; i < elementos ; i++){
        printf("Ingrese el valor para arreglo[%d]:\n", i);
        scanf("%d", &arreglo[i]);
    }
}

int sumatoriaArreglo(int arreglo[], int elementos){
    int suma = 0;
    for(int i = 0 ; i < elementos ; i++){
        suma = suma + arreglo[i];
    }
    return suma;
}