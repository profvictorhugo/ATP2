#include <stdio.h>
#include <string.h>
/**
 * usando a biblioteca string.h
 * buscando um char na strings
 * Retorna um ponteiro para a primeira ocorrência.
 */
int main() {
    char texto[] = "programacao";
    
    char *pos = strchr(texto, 'g');

    if (pos != NULL) {
        printf("Encontrado: %s\n", pos);
        printf("%c\n", pos[0]);
    }

    return 0;
}