#include <stdio.h>

int main(){
    char nombreUsuario[20];
    char apellidoUsuario[20];

    // printf("Ingrese su nombre: ");
    // fscanf(stdin, "%s", nombreUsuario);
    // fprintf(stdout, "Ingrese su apellido: ");
    // fscanf(stdin, "%s", apellidoUsuario);
    // FILE* archivo = fopen("./usuarios.txt", "a");
    // fprintf(archivo, "Nombre: %s - Apellido: %s\n", nombreUsuario, apellidoUsuario);
    // fclose(archivo);   

    FILE* archivo = fopen("./usuarios.txt", "r");
    
        // Obtener un usuario
    fscanf(archivo, "Nombre: %s - Apellido: %s\n", nombreUsuario, apellidoUsuario);
    fprintf(stdout, "El usuario registrado es: %s %s\n", nombreUsuario, apellidoUsuario);
    fscanf(archivo, "Nombre: %s - Apellido: %s\n", nombreUsuario, apellidoUsuario);
    fprintf(stdout, "El usuario registrado es: %s %s\n", nombreUsuario, apellidoUsuario);

    fclose(archivo);

    return 0;
}