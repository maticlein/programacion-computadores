#include <stdio.h>
#include "./agenda.h"

int main(){
    
    // EJEMPLOS ARCHIVOS

    // // Crear archivo nuevo o Sobreescribir existente 
    // FILE* archivo = fopen("ejemplo.txt", "w");
    // fprintf(archivo, "Hola Mundo %d\n", 3);
    // fclose(archivo);
    
    // // Crear archivo nuevo o Añadir información a existente 
    // FILE* archivo = fopen("ejemplo.txt", "a+");
    // fprintf(archivo, "Hola Mundo %d\n", 3);
    // fclose(archivo);

    // // Leer un archivo
    // char palabra1[10];
    // char palabra2[10];
    // int numero;
    // FILE* archivo = fopen("ejemplo.txt", "r");
    // fscanf(archivo, "%s %s %d\n", palabra1, palabra2, &numero);
    // printf("%s %s %d\n", palabra1, palabra2, numero);
    // fclose(archivo);

    agregarContacto();

    // // COMPILAR EN WINDOWS
    // - Crear un archivo con extensión .sh (ej: compilar.sh)
    // - Escribir en el archivo todas las líneas de comando para compilar el
    // proyecto y generar el ejecutable.
    // - Ejecutar en la linea de comandos: chmod 777 compilar.sh
    // - Luego ejecutar: source compilar.sh
    // - Finalmente doble click en el archivo ejecutable.
    

    return 0;
}