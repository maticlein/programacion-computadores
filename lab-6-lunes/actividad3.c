#include <stdio.h>

int main(){
    // Variables
    long password = 123456789;
    long userPassword = 0;

    // Pedir y guardar contraseña
    printf("Ingrese su contraseña: ");
    scanf("%lu", &userPassword);

    // Verificar si es correcta o no, luego repetir hasta que se acaben los intentos permitidos
    if (userPassword == password) {
        printf("Bienvenido a su cuenta!\n");
    } else{
        printf("Clave incorrecta. Tiene 2 intentos más.\n");
        printf("Ingrese su contraseña: ");
        scanf("%lu", &userPassword);
        if (userPassword == password) {
            printf("Bienvenido a su cuenta!\n");
        } else{
            printf("Clave incorrecta. Tiene 1 intento más.\n");
            printf("Ingrese su contraseña: ");
            scanf("%lu", &userPassword);
            if (userPassword == password) {
                printf("Bienvenido a su cuenta!\n");
            } else{
                printf("Clave incorrecta. Usuario Bloqueado.\n");
            }
        }
    }

    return 0;
}