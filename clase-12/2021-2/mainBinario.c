#include <stdio.h>

int main(){
    char mensaje[5];
    FILE* archivo = fopen("archivo.bin", "rb");
    fread(mensaje, sizeof(mensaje), 1, archivo);
    fclose(archivo);
    printf("%s\n", mensaje);
    return 0;
}