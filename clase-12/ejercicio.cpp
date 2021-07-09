#include <stdio.h>

int main(){

    FILE* lectura = fopen("data.dat", "r");
    FILE* escritura = fopen("numeros.txt", "w");

    int dato;

    while(!feof(lectura)){
        //LEER
        fscanf(lectura, "%d ", &dato);
        fprintf(escritura, "%d -> ", dato);
        //PROCESAR
        if(dato%2 == 0){
            fprintf(escritura, "PAR - ");
        } else {
            fprintf(escritura, "IMPAR - ");
        }

        if((dato == 1) || (dato == 2)){
            fprintf(escritura, "PRIMO\n");
        } else {
            for(int i = dato - 1; i > 1 ; i--){
                if(dato%i == 0){
                    fprintf(escritura, "NO PRIMO\n");
                    break;
                }
                if(i == 2){
                    fprintf(escritura, "PRIMO\n");
                    break;
                }
            }
        }

        //ESCRIBIR RESULTADO
    }
    fclose(lectura);
    fclose(escritura);
    return 0;
}