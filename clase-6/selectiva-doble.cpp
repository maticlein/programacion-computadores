#include <stdio.h>

int numero1;
int numero2;

int main(){
    // INGRESAR PRIMER NUMERO
    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1);
    // INGRESAR EL SEGUNDO NUMERO
    printf("Ingrese el segundo número:\n");
    scanf("%d", &numero2);
    // COMPARARLOS -> numero1 > numero2
    if(numero1 > numero2){
        // EL PRIMERO SEA EL MAYOR
        printf("El número mayor es: %d\n", numero1);
    } else {
        // EL SEGUNDO SEA EL MAYOR
        printf("El número mayor es: %d\n", numero2);
    }
    
    return 0;
}