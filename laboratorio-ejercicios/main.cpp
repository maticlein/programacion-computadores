// Librerías
#include <stdio.h>

// Variables globales
int opcion;
int numero1;
int numero2;
int resultado;

// Función principal
int main(){
    // Darle la bienvenida al usuario e indicarle función del programa
    printf("----------------------------------\n");
    printf("--------- BIENVENIDO -------------\n");
    printf("---------      A    -------------\n");
    printf("--------- LA CALCULADORA  --------\n");
    printf("----------------------------------\n");
    // Imprimir un menú de opciones (sumar-restar-multiplicar-dividir)
    printf("Cuál operación quiere realizar?:\n");
    printf("1.- SUMA\n");
    printf("2.- RESTA\n");
    printf("3.- MULTIPLICACION\n");
    printf("4.- DIVISION\n");
    // El usuario ingresa su elección
    scanf("%d", &opcion);
    // Dependiendo de lo que ingresa el usuario se define una operación
    switch(opcion){
        case 1: // Pedirle que ingrese dos números
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                // Realizar operación
                resultado = numero1 + numero2;
                // Indicarle el resultado de la operación al usuario
                printf("La suma entre %d y %d es: %d\n", numero1, numero2, resultado);
                break;
        case 2: // Pedirle que ingrese dos números
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                // Realizar operación
                resultado = numero1 - numero2;
                // Indicarle el resultado de la operación al usuario
                printf("La resta entre %d y %d es: %d\n", numero1, numero2, resultado);
                break;
        case 3: // Pedirle que ingrese dos números
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                // Realizar operación
                resultado = numero1 * numero2;
                // Indicarle el resultado de la operación al usuario
                printf("La multiplicación entre %d y %d es: %d\n", numero1, numero2, resultado);
                break;
        case 4: // Pedirle que ingrese dos números
                printf("Ingrese el primer número:\n");
                scanf("%d", &numero1);
                printf("Ingrese el segundo número:\n");
                scanf("%d", &numero2);
                // Realizar operación
                resultado = numero1 / numero2;
                // Indicarle el resultado de la operación al usuario
                printf("La división entre %d y %d es: %d\n", numero1, numero2, resultado);
                break;
        default: printf("OPERACION NO ENCONTRADA\n");  
    } 
    return 0;
}