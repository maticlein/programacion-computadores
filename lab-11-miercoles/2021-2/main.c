#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int opcion;
    FILE* archivo;
    char rutaArchivo[50] = "./agendas/"; 
    char nombreArchivo[50];
    char nombre[20];
    char apellido[20];
    char telefono[20];

    printf("-------------------------\n");
    printf("-------------------------\n");
    printf("---AGENDAS TELEFÓNICAS---\n");
    printf("-------------------------\n");
    printf("-------------------------\n");

    printf("1.- Listar las agendas disponibles.\n");
    printf("2.- Crear una nueva agenda.\n");
    printf("3.- Insertar un contacto en una agenda.\n");
    printf("4.- Revisar una agenda.\n");
    printf("5.- Eliminar una agenda.\n");
    printf("6.- Salir.\n");
    printf("Ingrese una opción: ");
    scanf("%i", &opcion);

    // Validar la opción

    // Encapsular el switch en un bucle
    switch(opcion) {
        case 1: printf("Listar\n");
                system("ls ./agendas/");
                break;
        case 2: printf("Crear\n");
                printf("Ingrese el nombre del archivo que quiere crear: ");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                printf("%s\n", nombreArchivo);
                strcat(rutaArchivo, nombreArchivo);
                archivo = fopen(rutaArchivo, "w");
                fclose(archivo);
                break;
        case 3: printf("Insertar\n");
                system("ls ./agendas/");
                printf("Escriba el nombre del archivo en el cual quiere insertar: ");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                strcat(rutaArchivo, nombreArchivo);
                archivo = fopen(rutaArchivo, "a+");
                printf("Ingrese el nombre del contacto:\n");
                scanf("%s", nombre);
                printf("Ingrese el apellido del contacto:\n");
                scanf("%s", apellido);
                printf("Ingrese el teléfono del contacto:\n");
                scanf("%s", telefono);
                fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                printf("Contacto guardado exitosamente!\n");
                fclose(archivo);
                break;
        case 4: printf("Revisar\n");
                system("ls ./agendas/");
                printf("Escriba el nombre de la agenda que quiere revisar: ");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                strcat(rutaArchivo, nombreArchivo);
                archivo = fopen(rutaArchivo, "r");
                while(!feof(archivo)) {
                        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                        printf("%s %s %s\n", nombre, apellido, telefono);
                }
                break;
        case 5: printf("Eliminar\n");
                system("ls ./agendas/");
                printf("Escriba el nombre de la agenda que quiere eliminar: ");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                strcat(rutaArchivo, nombreArchivo);
                remove(rutaArchivo);
                break;
        case 6: printf("Salir\n");
                break;
        default: printf("La opción ingresada no es válida!\n");
    }

    return 0;
}