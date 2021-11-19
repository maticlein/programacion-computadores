#include "calculos.h"

// Implementaciones
int sumaDosNumeros(int numero1, int numero2){
    int resultado = 0;
    resultado = numero1 + numero2;
    return resultado;
}

int sumatoriaArreglo(int arreglo[], int longitud){
    int sumatoria = 0;
    for(int i = 0 ; i < longitud ; i++){
        sumatoria += arreglo[i];
    }
    return sumatoria;
}