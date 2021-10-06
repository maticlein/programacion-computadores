#include <stdio.h>

int main(){
    long clave_correcta = 12345678;
    long clave_usuario = 0;
    printf("Bienvenido!\n");
    printf("Ingrese su clave: ");
    scanf("%lu", &clave_usuario);

    if(clave_usuario == clave_correcta){
        printf("La clave es correcta!\n");
    } else {
        printf("La clave es incorrecta :(\n");
        printf("Le quedan 2 intentos.\n");
        printf("Por favor ingrese nuevamente su clave: ");
        scanf("%lu", &clave_usuario);
        if(clave_usuario == clave_correcta){
            printf("La clave es correcta!\n");
        } else {
            printf("La clave es incorrecta :(\n");
            printf("Le quedan 1 intento.\n");
            printf("Por favor ingrese nuevamente su clave: ");
            scanf("%lu", &clave_usuario);
            if(clave_usuario == clave_correcta){
                printf("La clave es correcta!\n");
            } else {
                printf("Usuario Bloqueado.\n");
            }
        }
    }

    return 0;
}