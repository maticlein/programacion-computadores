#include <stdio.h>
#include <string.h>

int main(){
    int opcion;
    char nombreArchivo[20];
    char nombre[10];
    char apellido[10];
    char telefono[10];
    FILE* archivo;

    char ejemplo[50];
    printf("Ingrese oración: ");
    scanf("%[^\n]s", ejemplo);
    printf("%s\n", ejemplo);

    printf("1.- Crear Archivo\n");
    printf("2.- Leer Archivo\n");
    printf("3.- Insertar Contacto\n");
    printf("Ingrese la opción: ");
    scanf("%d", &opcion);

    switch(opcion){
        case 1: printf("Ingrese el nombre del archivo: ");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                archivo = fopen(nombreArchivo, "a+");
                fclose(archivo);
                break;
        case 2: printf("Ingrese el nombre del archivo: ");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                archivo = fopen(nombreArchivo, "r");
                while(!feof(archivo)){
                    fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                    printf("%s %s %s\n", nombre, apellido, telefono);
                }
                fclose(archivo);
                break;
        case 3: printf("Ingrese el nombre del archivo: ");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                archivo = fopen(nombreArchivo, "a+");
                printf("Ingrese el nombre del contacto: ");
                scanf("%s", nombre);
                printf("Ingrese el apellido del contacto: ");
                scanf("%s", apellido);
                printf("Ingrese el teléfono del contacto: ");
                scanf("%s", telefono);
                fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                printf("Contacto agregado exitosamente!\n");
                fclose(archivo);
                break;
        default: printf("La opción no es válida.\n");
    }

    return 0;
}