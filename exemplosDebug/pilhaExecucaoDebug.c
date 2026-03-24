#include <stdio.h>

int numero = 10;

void funcaoA() {
    printf("Dentro da função A\n");
}

void funcaoB() {
    printf("Dentro da função B\n");
    funcaoA();
}

void funcaoC() {
    printf("Dentro da função C\n");
    funcaoB();
    int a = numero;
}

int main() {
    //int numero = 10;
    printf("Iniciando o programa\n");
    funcaoC();
    printf("Finalizando o programa\n");
    return 0;
}