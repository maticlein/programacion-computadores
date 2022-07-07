#include "libreria.h"

int menorPromedio(int promedios[5]){
    int menor = promedios[0];
    for(int i = 0 ; i < 5 ; i++){
        if(promedios[i] < menor){
            menor = promedios[i];
        }
    }
    return menor;
}

int mayorPromedio(int promedios[5]){
    int mayor = promedios[0];
    for(int i = 0 ; i < 5 ; i++){
        if(promedios[i] > mayor){
            mayor = promedios[i];
        }
    }
    return mayor;
}