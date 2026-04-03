#include <stdio.h>
#include <string.h>

/*
Usando a biblioteca string.h
Copiando o conteudo de uma string para outra
*/

int main() {
    char origem[] = "C linguagem";
    char destino[50];

    //copia o conteúdo de origem para destino
    strcpy(destino, origem);

    printf("Destino: %s\n", destino);

    return 0;
}