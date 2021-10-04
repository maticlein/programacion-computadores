// Librerías
#include <stdio.h> 

// Variables globales
// ENTRADAS = OPCION Y DOS NUMEROS 
// SALIDAS = RESULTADO
int opcion;
int numero1;
int numero2;
int resultado;

// Función Principal
int main(){
    // CALCULADORA
    // Presentación y saludo al usuario
    printf("------------------------------------\n");
    printf("----------BIENVENIDO------------\n");
    printf("----------A LA ------------\n");
    printf("----------CALCULADORA ------------\n");
    printf("----------ICC202-5 ------------\n");
    printf("------------------------------------\n");
    // Menú de opciones (suma-resta-multiplicación-división)
    printf("1.- SUMA\n");
    printf("2.- RESTA\n");
    printf("3.- MULTIPLICACION\n");
    printf("4.- DIVISION\n");
    printf("Seleccione la operación que quiere realizar:\n");
    // Obtener la respuesta del usuario
    scanf("%d", &opcion);
    // Dependiendo de la respuesta vamos a realizar una operación
    switch(opcion){
        case 1: // Pedirle dos números al usuario
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                // Realizar la operación
                resultado = numero1 + numero2;
                // Entregarle el resultado
                printf("El resultado de la suma entre %d y %d es %d\n", numero1, numero2, resultado); 
                break;
        case 2: // Pedirle dos números al usuario
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                // Realizar la operación
                resultado = numero1 - numero2;
                // Entregarle el resultado
                printf("El resultado de la resta entre %d y %d es %d\n", numero1, numero2, resultado); 
                break;
        case 3: // Pedirle dos números al usuario
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                // Realizar la operación
                resultado = numero1 * numero2;
                // Entregarle el resultado
                printf("El resultado de la multiplicación entre %d y %d es %d\n", numero1, numero2, resultado); 
                break;
        case 4: // Pedirle dos números al usuario
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                // Realizar la operación
                resultado = numero1 / numero2;
                // Entregarle el resultado
                printf("El resultado de la división entre %d y %d es %d\n", numero1, numero2, resultado); 
                break;
        default: printf("La opción ingresada no es válida!\n");
    }

    return 0;
}