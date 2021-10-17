#include <stdio.h>

int main(){
    int edad = 0;
    int destino = 0;
    // PEDIR EDAD (número entero)
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    // PEDIR DESTINO (número entero: 1 - 2 - 3)
    printf("Ingrese su destino: ");
    scanf("%d", &destino);
    // REVISAR TABLA
    if(edad < 15){
        if(destino == 1){
            printf("El valor del pasaje es: $2.500\n");
        } else if(destino == 2){
            printf("El valor del pasaje es: $1.200\n");
        } else {
            printf("El valor del pasaje es: $2.000\n");
        }
    } else if (edad < 65){
        if(destino == 1){
            printf("El valor del pasaje es: $4.200\n");
        } else if(destino == 2){
            printf("El valor del pasaje es: $3.000\n");
        } else {
            printf("El valor del pasaje es: $2.000\n");
        }
    } else {
        if(destino == 1){
            printf("El valor del pasaje es: $2.000\n");
        } else if(destino == 2){
            printf("El valor del pasaje es: $3.800\n");
        } else {
            printf("El valor del pasaje es: $2.500\n");
        }
    }
    return 0;
}