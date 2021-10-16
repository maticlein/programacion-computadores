#include <stdio.h>

int main(){
    int numeros[] = {9, 12, 7, 29, 13, 1, 8, 16, 23, 10};

    // Asignar un valor a cada elemento
    // for(int i = 0 ; i < 10 ; i++){
    //     numeros[i] = i + 1;
    //     printf("%i\n", numeros[i]);
    // }

    // Ordenar arreglo
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 - 1 ; j++){
            if(numeros[j] > numeros[j + 1]){
                int aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    for(int i = 0 ; i < 10 ; i++){
        printf("%i - ", numeros[i]);
    }
    printf("\n");
    // Búsqueda Secuencial
    int objetivo = 0;
    printf("Ingrese el número que desea buscar: ");
    scanf("%i", &objetivo);

    for(int i = 0 ; i < 10 ; i++){
        printf("Iteración Búsqueda Secuencial: %i\n", i + 1);
        if(numeros[i] == objetivo){
            printf("Número Encontrado!\n");
            break;
        }
        if(i == 9){
            printf("Número no encontrado en el arreglo\n");
        }
    }

    // Búsqueda Binaria 
    int minimo = 0;
    int maximo = 9;
    int central;
    int iteracion = 0;
    while(minimo <= maximo){
        iteracion++;
        central = (minimo + maximo)/2;
        printf("Iteración Búsqueda Binaria: %i\n", iteracion);
        if(objetivo == numeros[central]){
            printf("El número %d está en valores[%d]\n", objetivo, central);
            break;
        } else { 
            if(numeros[central] > objetivo){
                maximo = central - 1;
            } else {
                minimo = central + 1;
            }
        }

    }

    // Matrices
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    // Cadenas de caracteres

    char nombre[15] = "Benjamin";
    nombre[1] = 'E';
    nombre[2] = 'N';
    nombre[3] = 'J';
    nombre[4] = 'A';
    nombre[5] = 'M';
    nombre[6] = 'I';
    nombre[7] = 'N';
    printf("%s\n", nombre);

    printf("%c\n", nombre[0]);

    return 0;
}