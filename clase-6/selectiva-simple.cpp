#include <stdio.h>

int numero1;
int numero2;
int suma;

int main(){
    // INGRESAR PRIMER NUMERO
    printf("Ingrese el primer número:\n");
    scanf("%d", &numero1);
    // INGRESAR SEGUNDO NUMERO
    printf("Ingrese el segundo número:\n");
    scanf("%d", &numero2);
    // PREGUNTAR SI EL SEGUNDO NUMERO ES 5
    if(numero2 == 5){
        // SI EL SEGUNDO NUMERO ES 5, SUMAMOS AMBOS NUMEROS
        suma = numero1 + numero2;
        printf("La suma es: %d\n", suma);
    }
    // SI EL SEGUNDO NUMERO NO ES 5, NO HACEMOS NADA
    
    return 0;
}