#include <stdio.h>

int main(){
    int numero = 0;
    printf("Ingrese el número para el cual quiere buscar divisores: ");
    scanf("%i", &numero);

    if(numero > 1){
        printf("Los divisores de %i son: 1 - ", numero);
        for(int i = 2 ; i < numero ; i++){
            if(numero % i == 0){
                printf("%i - ", i);
            }
        }
        printf("%i\n", numero);
    } else {
        printf("El divisor de %i es: 1\n", numero);
    }

    return 0;
}