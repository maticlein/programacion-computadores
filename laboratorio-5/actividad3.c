#include <stdio.h>

int main(){
    float numero1 = 0;
    float numero2 = 0;
    float producto = 0;
    printf("Ingrese dos números reales de la forma: X.X , Y.Y\n");
    scanf("%f , %f", &numero1, &numero2);
    producto = numero1 * numero2;
    printf("El producto entre %.2f y %.2f es: %.2f\n", numero1, numero2, producto);
    return 0;
}