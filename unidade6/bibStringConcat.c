#include <stdio.h>
#include <string.h>

/**
 * usando a biblioteca string.h
 * concatenando strings
 */

int main() {
    char nome[50] = "Victor";
    
    //concatena à string nome
    strcat(nome, " Hugo");

    printf("Nome completo: %s\n", nome);

    return 0;
}