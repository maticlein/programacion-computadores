#include <stdio.h>

int main(){

    int veces = 0;
    int codigo = 0;
    int precio = 0;
    printf("Ingrese la cantidad de productos que quiere comprar: ");
    scanf("%i", &veces);

    for(int i = 0 ; i < veces ; i++){
        printf("Procesando compra %i\n", i + 1);
        printf("Ingrese el código del producto %i: ", i + 1);
        scanf("%i", &codigo);
        printf("Ingrese el precio del producto %i: ", i + 1);
        scanf("%i", &precio);
        printf("Compra %i - Código %i - Precio %i\n", i + 1, codigo, precio);
    }

    return 0;
}