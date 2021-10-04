#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int opcion;
    char nombreArchivo[30];
    FILE* archivo;
    FILE* archivo_temp;
    char nombre[15];
    char contactoEliminar[15];
    char apellido[20];
    char telefono[20];

    printf("--- AGENDA CONTACTOS ---\n");
    printf("1.- Listar agendas\n");
    printf("2.- Crear agenda\n");
    printf("3.- Añadir un registro en una agenda\n");
    printf("4.- Eliminar un registro en una agenda\n");
    printf("5.- Eliminar una agenda\n");
    printf("6.- Revisar una agenda\n");
    printf("7.- Salir\n");
    printf("Seleccione una opción:\n");
    scanf("%d", &opcion);

    while((opcion > 0) && (opcion < 6)){
        switch(opcion){
            case 1: printf("Listar\n");
                    // system("dir"); // Windows
                    system("ls *.txt");
                    break;
            case 2: printf("Ingrese el nombre del archivo que quiere crear:\n");    
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "w");
                    fclose(archivo);
                    break;
            case 3: printf("Los archivos disponibles son:\n");
                    system("ls *.txt");
                    printf("Ingrese el nombre del archivo donde quiere agregar un registro:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "a+");
                    printf("Ingrese el nombre del contacto:\n");
                    scanf("%s", nombre);
                    printf("Ingrese el apellido del contacto:\n");
                    scanf("%s", apellido);
                    printf("Ingrese el teléfono del contacto:\n");
                    scanf("%s", telefono);
                    fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                    fclose(archivo);
                    break;
            case 4: printf("Los archivos disponibles son:\n");
                    system("ls *.txt");
                    printf("Ingrese el nombre del archivo donde quiere eliminar un registro:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "r");
                    while(!feof(archivo)){
                        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                        printf("%s %s %s\n", nombre, apellido, telefono);
                    }
                    printf("Ingrese el nombre del contacto que quiere eliminar:\n"); 
                    scanf("%s", contactoEliminar);
                    rewind(archivo);
                    archivo_temp = fopen("tmp.txt", "w");
                    while(!feof(archivo)){
                        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                        if(strcmp(contactoEliminar, nombre) == 0){
                            // printf("ES\n");
                        } else {
                            // printf("NO ES\n");
                            fprintf(archivo_temp, "%s %s %s\n", nombre, apellido, telefono);
                        }
                    }
                    fclose(archivo);
                    remove(nombreArchivo);
                    rename("tmp.txt", nombreArchivo);
                    break;
            case 5: printf("Los archivos disponibles son:\n");
                    system("ls *.txt");
                    printf("Ingrese el nombre del archivo que quiere eliminar:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    remove(nombreArchivo);
                    break;
            case 6: printf("Los archivos disponibles son:\n");
                    system("ls *.txt");
                    printf("Ingrese el nombre del archivo que quiere revisar:\n");
                    scanf("%s", nombreArchivo);
                    strcat(nombreArchivo, ".txt");
                    archivo = fopen(nombreArchivo, "r");
                    while(!feof(archivo)){
                        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
                        printf("%s %s %s\n", nombre, apellido, telefono);
                    }
                    break;
            case 7: printf("Salir\n");
                    break;
        }
        break;
    }


    return 0;
}