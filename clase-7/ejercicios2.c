#include <stdio.h>

int main(){
    printf("Ejercicios 2\n");
    int a = 0;
    int b = 5;

    // while(a < b){
    //     printf("WHILE!\n");
    //     a++;
    // }

    // do{
    //     printf("DO WHILE\n");
    // } while(a > b); 

    for(int i = 0 ; i < 5 ; i++){
        // if(i == 2){
        //     break;
        // }
        if(i == 2){
            continue;
        }
        printf("FOR\n");
    }

    return 0;
}