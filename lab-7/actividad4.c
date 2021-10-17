#include <stdio.h>

int main(){
    int numero = 0;
    printf("Ingrese un número: ");
    scanf("%i", &numero); // 7

    // Se revisa cada número entre el 2 y el número ingresado.
    for(int i = 2 ; i <= numero ; i++){
        // printf("BUSCAR SI EL %i TIENE 2 DIVISORES\n", i);
        int divisores = 0;
        // Para cada número se buscan potenciales divisores.
        for(int j = 2 ; j < i ; j++){
            // printf("REVISANDO: %i\n", j);
            int resto = i%j;
            if(resto == 0){
                // printf("El %i es divisor de %i\n", j, i);
                divisores++;
            } else {
                // printf("El %i no es divisor de %i\n", j, i);
            }
        }
        if(divisores == 0){
            printf("EL %i ES PRIMO!\n", i);
        } else {
            printf("EL %i ES NO PRIMO!\n", i);
        }
    }
    // 2  3  4  5    OK
    // ?  ?  ?  ?  
    //  2
    //  3       1      2            3       
    //  4       1    2   3          4
    //  5       1    2  3  4        5
    //  n       1    2      n-1     n
    // ?: PRIMO

    return 0;
}