// Implementaciones
#include "./agenda.h"
#include <stdio.h>

void agregarContacto(){
    char nombre[15];
    char apellido[15];
    char email[50];
    int edad;

    printf("Ingrese su nombre:\n");
    scanf("%s", nombre);
    printf("Ingrese su apellido:\n");
    scanf("%s", apellido);
    printf("Ingrese su email:\n");
    scanf("%s", email);
    printf("Ingrese su edad:\n");
    scanf("%d", &edad);

    FILE* archivo = fopen("contactos.txt", "a+");
    fprintf(archivo, "%s %s %s %d\n", nombre, apellido, email, edad);
    fclose(archivo);
}