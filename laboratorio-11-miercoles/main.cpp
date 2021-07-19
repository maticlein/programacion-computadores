#include <stdio.h>
#include <stdlib.h> // system() -> Llamadas al sistema
#include <string.h> // Funciones para manejo de cadenas de caracteres

int main(){

    int opcion;
    FILE* agenda;
    char nombreArchivo[20];
    char nombre[15];
    char apellido[20];
    char telefono[20];

    printf("--- Agendas Contactos ---\n");
    printf("1.- Listar agendas\n");
    printf("2.- Crear agenda\n");
    printf("3.- Mostrar registros de una agenda\n");
    printf("4.- Añadir registro en agenda\n");
    printf("5.- Eliminar agenda\n");
    printf("6.- Salir\n");
    printf("Ingrese su opción:\n");
    scanf("%d", &opcion);

    switch(opcion){
        case 1: printf("Las agendas de contactos disponibles son:\n");
                system("ls *.txt");
                break;
        case 2: printf("Ingrese el nombre de la agenda que quiere crear:\n");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");          
                agenda = fopen(nombreArchivo, "w");
                fclose(agenda); 
                break;
        case 3: printf("Las agendas de contactos disponibles son:\n");
                system("ls *.txt");
                printf("Ingrese el nombre de la agenda que quiere revisar:\n");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                agenda = fopen(nombreArchivo, "r");
                // Imprimir
                while(!feof(agenda)){
                    fscanf(agenda, "%s %s %s\n", nombre, apellido, telefono);
                    printf("%s %s %s\n", nombre, apellido, telefono);
                }
                fclose(agenda);
                break;
        case 4: printf("Las agendas de contactos disponibles son:\n");
                system("ls *.txt");
                printf("Ingrese el nombre de la agenda que quiere editar:\n");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");
                printf("Ingrese el nombre del contacto:\n");
                scanf("%s", nombre);
                printf("Ingrese el apellido del contacto:\n");
                scanf("%s", apellido);
                printf("Ingrese el teléfono del contacto:\n");
                scanf("%s", telefono);
                agenda = fopen(nombreArchivo, "a");
                fprintf(agenda, "%s %s %s\n", nombre, apellido, telefono);
                fclose(agenda);  
                break;
        case 5: printf("Las agendas de contactos disponibles son:\n");
                system("ls *.txt");
                printf("Ingrese el nombre de la agenda que quiere eliminar:\n");
                scanf("%s", nombreArchivo);
                strcat(nombreArchivo, ".txt");  
                remove(nombreArchivo);
                printf("La agenda %s ha sido eliminada correctamente!\n", nombreArchivo);
                break;
        case 6: break;
        default: printf("La opción elegida no es válida.\n");
    }

    return 0;
}