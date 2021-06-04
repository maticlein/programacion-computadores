#include <stdio.h>

// ENTRADAS
int cantidadCompras;
int precio;
int codigo;
// SALIDAS


int puntos = 5000;

int main(){
    // DARLE LA BIENVENIDA Y UN MENSAJE
    printf("-----------------------\n");
    printf("-------TIENDA------\n");
    printf("-----------------------\n");
    // EL USUARIO INGRESA LA CANTIDAD DE COMPRAS
    printf("Ingrese la cantidad de compras que desea realizar:\n");
    scanf("%d", &cantidadCompras);
    // PARA CADA COMPRA PEDIMOS EL PRECIO Y EL CODIGO
    for(int i = 0 ; i < cantidadCompras ; i++){
        printf("Ingrese el código del producto %d:\n", i + 1);
        scanf("%d", &codigo);
        printf("Ingrese el precio del producto %d:\n", i + 1);
        scanf("%d", &precio);
        printf("PRODUCTO %d -> CODIGO: %d - PRECIO: %d\n", i + 1, codigo, precio);

        if(puntos*10 >= precio){
            printf("Puede realizar su compra con puntos!\n");
        } else {
            printf("Su compra debe ser pagada con efectivo!\n");
        }

        if((codigo >= 100) && (codigo < 200)){
            if(precio < 10000){
                printf("Se acumula 1 punto por cada 100 pesos.\n");
                puntos += (precio/100);
            } else {
                printf("Se acumula 1 punto por cada 50 pesos.\n");
                puntos += (precio/50);
            }
        }

        if((codigo >= 200) && (codigo < 300)){
            if(precio < 10000){
                printf("Se acumula 1 punto por cada 50 pesos.\n");
                puntos += (precio/50);
            } else {
                printf("Se acumula 1 punto por cada 30 pesos.\n");
                puntos += (precio/30);
            }
        }
        printf("Puntos totales: %d\n", puntos);
    }

    return 0;
}