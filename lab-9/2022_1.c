#include <stdio.h>

// Prototipos
void imprimirMenu();
int pedirOpcion();
int pedirPrimerNumero();   
int pedirSegundoNumero();
int calcularResultado(int operacion);   

int main(){
    int opcion;
    char frase[50];
    printf("Ingrese su frase: ");
    scanf("%[^\n]s", frase);
    printf("FRASE: %s\n", frase);
    while(opcion != 5){
        imprimirMenu();
        opcion = pedirOpcion();
        if(opcion == 5){
            printf("Hasta luego!\n");
        } else {
            printf("El resultado es: %d\n", calcularResultado(opcion));
        }
    }
    return 0;
}

void imprimirMenu(){
    printf("1.- SUMA\n");
    printf("2.- RESTA\n");
    printf("3.- MULTIPLICACIÓN\n");
    printf("4.- DIVISIÓN\n");
    printf("5.- SALIR\n");
}

int pedirOpcion(){
    int opc;
    printf("Ingrese la opción: ");
    scanf("%d", &opc);
    return opc;
}

int pedirPrimerNumero(){
    int num1;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    return num1;
}  

int pedirSegundoNumero(){
    int num2;
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    return num2;
}

int calcularResultado(int operacion){
    int numero1 = pedirPrimerNumero();
    int numero2 = pedirSegundoNumero();
    int resultado;
    switch(operacion){
        case 1: resultado = numero1 + numero2;
                break;
        case 2: resultado = numero1 - numero2;
                break;
        case 3: resultado = numero1 * numero2;
                break;
        case 4: resultado = numero1 / numero2;
                break;
        default: printf("Operación inválida.\n");
    }
    return resultado;
}