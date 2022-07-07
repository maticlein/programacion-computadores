#include <stdio.h>
#include "./libreria.h"

int main(){
    int numEstablecimientos = 0;
    int numEstudiantes = 10;
    int bajo300 = 0;
    int sobre500 = 0;
    int sumatoria = 0;

    printf("Ingrese la cantidad de establecimientos a procesar: ");
    scanf("%d", &numEstablecimientos);
    
    int puntajes;
    int promedios[numEstablecimientos];
    int calificaciones[3];

    for(int i = 0 ; i < numEstablecimientos ; i++){
        bajo300 = 0;
        sobre500 = 0;
        sumatoria = 0;
        for(int j = 0 ; j < numEstudiantes ; j++){
            printf("Ingrese el puntaje del estudiante %d del establecimiento %d\n", j + 1, i + 1);
            scanf("%d", &puntajes);
            while(puntajes > 600 || puntajes < 0){
                printf("Puntaje inválido. Ingrese nuevamente el puntaje del estudiante %d del establecimiento %d\n", j + 1, i + 1);
                scanf("%d", &puntajes); 
            }
            sumatoria += puntajes;
            if(puntajes < 300){
                bajo300++;
            }
            if(puntajes >= 500){
                sobre500++;
            }
            int porcentaje_bajo300 = bajo300 * 100 / numEstudiantes;
            int porcentaje_sobre500 = sobre500 * 100 / numEstudiantes;
            if(porcentaje_bajo300 >= 70){
                printf("Insuficiente");
                calificaciones[0]++;
            } else if(porcentaje_sobre500 > 70){
                printf("Bueno");
                calificaciones[2]++;
            } else {
                printf("Suficiente");
                calificaciones[1]++;
            }
        }
        promedios[i] = sumatoria / numEstudiantes;
    }

    return 0;
}