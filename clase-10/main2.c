#include <stdio.h>

// Prototipos
void saludo();
void despedida();
int doble(int numero);
int sumaDosNumeros(int numero1, int numero2);

// Variables globales
int variableGlobal = 12;

int main(){
    int num = 0;
    saludo();
    printf("%i\n", variableGlobal);

    // Pedirle un número al usuario y guardarlo en la variable num
    printf("Ingrese un número para calcular su doble: ");
    scanf("%i", &num);
    int dobleNumero = doble(num);
    printf("%i\n", dobleNumero);

    // Sumar dos números
    int ejemplo = sumaDosNumeros(3, 2);
    printf("Resultado de la suma: %i\n", ejemplo);

    despedida();
    return 0;
}

// Implementaciones
void saludo(){
    printf("Hola mundo!\n");
    printf("%i\n", variableGlobal);
}

void despedida(){
    printf("Hasta luego!\n");
    printf("%i\n", variableGlobal);
}

int doble(int numero){
    int resultado = numero * 2;
    printf("%i\n", variableGlobal);
    return resultado;
}

int sumaDosNumeros(int numero1, int numero2){
    int resultado = numero1 + numero2;
    printf("%i\n", variableGlobal);
    return resultado;
}