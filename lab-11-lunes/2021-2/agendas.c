#include "./agendas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirInicio() {
    printf("-------------------------------\n");
    printf("-------------------------------\n");
    printf("-----AGENDAS TELEFONICAS-------\n");
    printf("-------------------------------\n");
    printf("-------------------------------\n");
}

void imprimirMenu() {
    printf("1.- Listar agendas disponibles.\n");
    printf("2.- Crear una agenda.\n");
    printf("3.- Insertar en una agenda.\n");
    printf("4.- Eliminar una agenda.\n");
    printf("5.- Imprimir una agenda.\n");
    printf("6.- Salir.\n");
}

void listarAgendas() {
    printf("Listado de agendas disponibles:\n");
    system("ls ./agendas *.txt");
}

void definirRutaArchivo(char rutaArchivo[], char nombreArchivo[]) {
    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
    strcat(rutaArchivo, nombreArchivo);
}

void crearAgenda(char rutaArchivo[]) {
    FILE* archivo = fopen(rutaArchivo, "w");
    fclose(archivo);
}

void insertarEnAgenda(char rutaArchivo[]) {
    char nombre[20];
    char apellido[20];
    char telefono[20];
    FILE* archivo = fopen(rutaArchivo, "a+");
    printf("Ingrese el nombre: ");
    scanf("%s", nombre);
    printf("Ingrese el apellido: ");
    scanf("%s", apellido);
    printf("Ingrese el teléfono: ");
    scanf("%s", telefono);
    fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
    fclose(archivo);
}

void eliminarAgenda(char rutaArchivo[]) {
    remove(rutaArchivo);
}

void imprimirAgenda(char rutaArchivo[]) {
    char nombre[20];
    char apellido[20];
    char telefono[20];
    FILE* archivo = fopen(rutaArchivo, "r");
    while(!feof(archivo)){
        fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
        printf("%s %s %s\n", nombre, apellido, telefono);
    }
    fclose(archivo);
}