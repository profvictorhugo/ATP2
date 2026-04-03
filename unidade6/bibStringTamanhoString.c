#include <stdio.h>
#include <string.h>

/*
Usando a biblioteca string.h
Vendo o tamanho de uma string
*/

int main() {
    char texto[100] = "Ola mundo";

    int tamanho = strlen(texto);

    printf("Tamanho: %d\n", tamanho);

    printf("Digite uma frase:\n");
    fgets(texto, sizeof(texto), stdin);

    tamanho = strlen(texto);

    printf("Tamanho: %d\n", tamanho);


    return 0;
}