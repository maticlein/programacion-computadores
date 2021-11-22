// Implementaciones
#include "matematica.h"
#include <stdio.h>
#include <stdlib.h>

void pantallaInicio()
{
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
    printf("----- Software de Ayuda Matemática -----\n");
    printf("----------------------------------------\n");
    printf("----------------------------------------\n");
}

void menuPrincipal()
{
    printf("Bienvenido!\n");
    printf("Este software cuenta con las siguientes opciones:\n");
    printf("1.- Operaciones básicas\n");
    printf("2.- Cálculo de pendiente de una recta\n");
    printf("3.- Distancia entre dos puntos\n");
    printf("4.- Solucionador de ecuaciones cuadráticas\n");
    printf("5.- Triángulos\n");
    printf("6.- Salir\n");
}

float realizarCalculo(float *numero1, float *numero2, int operacion)
{
    float resultado;
    switch (operacion)
    {
    case 1:
        pedirNumeros(numero1, numero2);
        resultado = *numero1 + *numero2;
        return resultado;
    case 2:
        pedirNumeros(numero1, numero2);
        resultado = *numero1 - *numero2;
        return resultado;
        break;
    case 3:
        pedirNumeros(numero1, numero2);
        resultado = *numero1 * *numero2;
        return resultado;
        break;
    case 4:
        pedirNumeros(numero1, numero2);
        while (numero2 <= 0)
        {
            system("clear");
            printf("El segundo número no es válido, por favor ingrese nuevamente: ");
            scanf("%f", numero2);
        }
        resultado = *numero1 / *numero2;
        return resultado;
        break;
    default:
        return 0;
    }
}

void pedirNumeros(float *numero1, float *numero2)
{
    system("clear");
    printf("Ingrese el primer número: ");
    scanf("%f", numero1);
    printf("Ingrese el segundo número: ");
    scanf("%f", numero2);
}