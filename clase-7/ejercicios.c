#include <stdio.h>

int main(){
    // Ejemplo del while (mientras - hacer)
    int impresiones = 0;
    int objetivo = 5;

    while(impresiones < objetivo){
        printf("WHILE - Programación de computadores\n");
        impresiones++;
    }

    // impresiones = 5
    // objetivo = 5

    do{
        printf("DO-WHILE - Programación de computadores\n");
        impresiones--;
    } while((impresiones < objetivo) && (impresiones > 0)); 


    int veces; // 5
    printf("Ingrese la cantidad de veces que quiere imprimir FOR por pantalla:\n");
    scanf("%d", &veces);

    for(int i = 0 ; i < veces ; i++){
        if(i == 2){
            continue;
        }
        printf("EJEMPLO FOR\n");
    }

    return 0;
}