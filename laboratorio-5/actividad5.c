#include <stdio.h>

int main(){
    float tarea1 = 0;
    float tarea2 = 0;
    float tarea3 = 0;
    float laboratorios = 0;
    float prueba1 = 0;
    float prueba2 = 0;
    float prueba3 = 0;
    printf("Ingrese la nota de la Prueba 1:\n");
    scanf("%f", &prueba1);
    printf("Ingrese la nota de la Prueba 2:\n");
    scanf("%f", &prueba2);
    printf("Ingrese la nota de la Tarea 1:\n");
    scanf("%f", &tarea1);
    printf("Ingrese la nota de la Tarea 2:\n");
    scanf("%f", &tarea2);
    printf("Ingrese la nota de la Tarea 3:\n");
    scanf("%f", &tarea3);
    printf("Ingrese la nota de Laboratorios:\n");
    scanf("%f", &laboratorios);
    prueba3 = (4.0 - 0.5 * (0.2 * tarea1 + 0.25 * tarea2 + 0.35 * tarea3 + 0.2 * laboratorios) - 0.5 * (0.2 * prueba1 + 0.35 * prueba2)) / (0.5 * 0.45);
    printf("Para aprobar el curso en la Prueba 3 debe tener un %.1f\n", prueba3);
    return 0;
}