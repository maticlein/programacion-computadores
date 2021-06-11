#include <stdio.h>

int a = 5;
int b = 3;
int x = 2;
int y = 3;

int main(){
    // MIENTRAS - HACER
    while(a > b){
        printf("MIENTRAS - HACER\n");
        a--;
    }

    // HACER - MIENTRAS
    do{
        printf("HACER - MIENTRAS\n");
    } while(x > y);


    // PARA
    for(int i = 0 ; i < 10 ; i++){
        printf("%d PARA\n", i);
    }

    return 0;
}