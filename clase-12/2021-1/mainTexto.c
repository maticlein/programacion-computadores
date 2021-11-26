#include <stdio.h>

int main(){
    // Ejemplo escritura archivo de texto
    char nombre[15];
    char password[5];
    char mail[40];
    FILE* escrituraNombres = fopen("usuarios.txt", "w");
    FILE* escrituraPassword = fopen("passwords.txt", "w");
    FILE* escrituraMail = fopen("mails.txt", "w");

    for(int i = 0 ; i < 3 ; i++){
        printf("Bienvenido usuario %d al registro de usuario:\n", i + 1);
        printf("Ingrese su nombre de usuario:\n");
        scanf("%s", nombre);
        printf("Ingrese su contraseña:\n");
        scanf("%s", password);
        printf("Ingrese su mail:\n");
        scanf("%s", mail);

        fprintf(escrituraNombres, "%s\n", nombre);
        fprintf(escrituraPassword, "%s\n", password);
        fprintf(escrituraMail, "%s\n", mail);
    }
    fclose(escrituraNombres);
    fclose(escrituraPassword);
    fclose(escrituraMail);

    // Ejemplo de lectura archivo de texto
    FILE* lecturaNombres = fopen("usuarios.txt", "r");
    FILE* lecturaPassword = fopen("passwords.txt", "r");
    FILE* lecturaMail = fopen("mails.txt", "r");
    for(int i = 0 ; i < 3 ; i++){
        fscanf(lecturaNombres, "%s", nombre);
        fscanf(lecturaPassword, "%s", password);
        fscanf(lecturaMail, "%s", mail);
        fprintf(stdout, "Usuario %d\n", i + 1);
        fprintf(stdout, "%s %s %s\n", nombre, password, mail);
    }
    fclose(lecturaNombres);
    fclose(lecturaPassword);
    fclose(lecturaMail);
    return 0;
}