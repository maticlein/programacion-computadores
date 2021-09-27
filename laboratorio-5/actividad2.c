#include <stdio.h>

int main(){
    char caracter;
    printf("Ingrese el carácter para el cual quiere conocer su valor numérico:\n");
    scanf("%c", &caracter);
    printf("El valor numérico del carácter %c en la Tabla ASCII es: %d\n", caracter, caracter);
    return 0;
}