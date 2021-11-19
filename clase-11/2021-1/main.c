#include <stdio.h>

int funcion(int x);
void funcion2(int& x);

int main(){
    int numero = 5;
    numero = funcion(numero);
    printf("funcion -> El número es: %d\n", numero);

    // printf("%p\n", &numero);
    // int* numero2 = new int;
    // *numero2 = 10;
    int numero2 = 7;
    funcion2(numero2);
    printf("funcion2 -> El número es: %d\n", numero2);

    return 0;
}

int funcion(int x){
    x = x * x;
    return x;
}

void funcion2(int& x){
    x = x * x;
}

