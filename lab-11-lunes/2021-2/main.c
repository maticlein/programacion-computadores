#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "./agendas.h"

int main() {
    int opcion = 0;
    char rutaArchivo[50] = "./agendas/";
    char nombreArchivo[50];
    bool sesion = true;
    imprimirInicio();
    
    while(sesion) {
        imprimirMenu();
        printf("Seleccione una opción: ");
        scanf("%i", &opcion);

      while(opcion < 1 || opcion > 6) {
            printf("La opción ingresada no es válida, ingrese nuevamente: ");
            scanf("%i", &opcion);
        }

        switch(opcion) {
            case 1: listarAgendas();
                    break;
            case 2: definirRutaArchivo(rutaArchivo, nombreArchivo);
                    crearAgenda(rutaArchivo);
                    break;
            case 3: listarAgendas();
                    definirRutaArchivo(rutaArchivo, nombreArchivo);
                    insertarEnAgenda(rutaArchivo);
                    break;
            case 4: listarAgendas();
                    definirRutaArchivo(rutaArchivo, nombreArchivo);
                    eliminarAgenda(rutaArchivo);
                    break;
            case 5: listarAgendas();
                    definirRutaArchivo(rutaArchivo, nombreArchivo);
                    imprimirAgenda(rutaArchivo);
                    break;
            case 6: printf("Hasta luego!\n");
                    sesion = false;
                    break;
                    default: printf("La opción ingresada no es válida.\n");
        }
    }
    return 0;
}