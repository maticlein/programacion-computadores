#include <stdio.h>

int main(){
    char mensaje[] = "Hola Mundo!";
    FILE* archivo = fopen("ejemplo.bin", "wb");
    fwrite(mensaje, sizeof(mensaje), 1, archivo);
    fclose(archivo);

    char data[15];
    FILE* lectura = fopen("ejemplo.bin", "rb");
    fread(data, sizeof(data), 1, lectura);
    printf("%s\n", data);

    return 0;
}
