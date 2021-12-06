#include <stdio.h>
#include "libreria.h"

int main(){
    imprimirSaludo();
    int dia = 4;
    int mes = 5;
    if((dia == 4) && (mes == 5)){
        printf("Se cumplen las condiciones!\n");
    }
    // int ejemplo = sumaDosNumeros(dia, mes);
    // printf("%i\n", ejemplo);
    printf("%i\n", sumaDosNumeros(dia, mes));

    int ejemplo = 5;
    cuadradoNumeroPorValor(ejemplo);
    printf("Cuadrado: %i\n", ejemplo);

    cuadradoNumeroPorReferencia(&ejemplo);
    printf("Cuadrado: %i\n", ejemplo);

    printf("--- ARCHIVOS ---\n");
    char nombre[50];
    char apellido[50];
    int numero = 1;
    FILE* archivo = fopen("ejemplo.txt", "w");
    fprintf(archivo, "Diego Herrera %i\n", numero);
    fclose(archivo);

    archivo = fopen("ejemplo.txt", "r");
    fscanf(archivo, "%s %s %i\n", nombre, apellido, &numero);
    printf("%s %s %i\n", nombre, apellido, numero);
    fclose(archivo);

    return 0;
}