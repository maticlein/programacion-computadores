#include <stdio.h>

// Prototipos
int suma(int a, int b);
int resta(int a, int b);
void mensajeSaludo();
void imprimirMensajes(int a);
bool par(int a);

// Variables

int main(){
    mensajeSaludo();
    int numero1 = 25;
    int numero2 = 20;
    printf("Los resultados son: %d y %d\n", resta(numero1, numero2), resta(7,3));
    
    // imprimirMensajes(1);
    // imprimirMensajes(2);
    // imprimirMensajes(3);

    printf("%d\n", par(7));

    return 0;
}

int suma(int a, int b){
    int resultado;
    resultado = a + b;
    return resultado; 
}

int resta(int a, int b){
    int resultado;
    resultado = a - b;
    return resultado;
}

void mensajeSaludo(){
    printf("Hola! Bienvenidos a la clase!!\n");
}

void imprimirMensajes(int a){
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Chao %d!\n", a);
}

bool par(int a){
    if(a%2 == 0){
        // PAR
        return true;
    } else {
        return false;
    }
}