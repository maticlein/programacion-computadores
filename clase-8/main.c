#include <stdio.h>

int main(){
    // Declarar arreglo de 100 elementos y rellenar con valores del 1 al 100
    int numeros[100];
    for(int i = 0 ; i < 100 ; i++){
        numeros[i] = i + 1;
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    // Búsqueda Secuencial
    int valores[] = {1, 89, 70, 16, 72, 23, 8, 10};
    int busqueda;
    printf("Ingrese el número que desea buscar:\n");
    scanf("%d", &busqueda);
    for(int i = 0 ; i < 8 ; i++){
        if(valores[i] == busqueda){
            printf("El número %d está en valores[%d]\n", busqueda, i);
            break;
        }
        if(i == 7){
            printf("El número no se encuentra en el arreglo.\n");
        } 
    }

    // Búsqueda Binaria
    int valores2[] = {1, 7, 10, 16, 20, 23, 78, 100};
    int minimo = 0;
    int maximo = 7;
    int central;

    while(minimo <= maximo){
        central = (minimo + maximo)/2;
        if(busqueda == valores2[central]){
            printf("El número %d está en valores[%d]\n", busqueda, central);
            break;
        } else { 
            if(valores2[central] > busqueda){
                maximo = central - 1;
            } else {
                minimo = central + 1;
            }
        }

    }

    // Ordenamiento Arreglo
    int arreglo[5];
    for(int i = 0 ; i < 5 ; i++){
        printf("Ingrese el valor de arreglo[%d]\n", i);
        scanf("%d", &arreglo[i]);
    }

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 - 1 ; j++){
            if(arreglo[j] > arreglo[j + 1]){
                int aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    for(int i = 0 ; i < 5 ; i++){
        printf("arreglo[%d] = %d\n", i, arreglo[i]);
    }

    // Matrices
    int matriz[4][2] = {{1, 2}, {3, 4}, {5, 10}, {70, 15}};

    // Filas
    for(int i = 0 ; i < 4 ; i++){
        // Columnas
        for(int j = 0 ; j < 2 ; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Cadenas de caracteres
    char nombre[15];
    char apellido[20]; 

    char nombres_clientes[50][15];
    char apellidos_clientes[50][20];

    int cantidad_clientes = 0;
    printf("Ingrese su nombre:\n");
    scanf("%s", nombres_clientes[cantidad_clientes]);
    printf("Ingrese su apellido:\n");
    scanf("%s", apellidos_clientes[cantidad_clientes]);
    cantidad_clientes++;
    printf("Bienvenido %s %s!!\n", nombres_clientes[0], apellidos_clientes[0]);

    return 0;
}