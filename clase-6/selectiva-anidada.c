#include <stdio.h>

float nota;

int main(){
    // INGRESAR NOTA (1.0 - 7.0)
    printf("Ingrese la nota:\n");
    scanf("%f", &nota);
    // EVALUAR LA NOTA Y DAR UNA RESPUESTA 
    if((nota >= 1.0) && (nota < 4.0)){
        printf("INSUFICIENTE\n");
    } else if(nota < 5.0){
        printf("SUFICIENTE\n");
    } else if(nota < 6.0){
        printf("BIEN\n");
    } else {
        printf("MUY BIEN\n");
    }
    // DEPENDIENDO DEL INTERVALO

    return 0;
}