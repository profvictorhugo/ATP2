#include <stdio.h>
#include <string.h>
/**
 * usando a biblioteca string.h
 * Encontrar uma substring na string
 */
int main() {
    char texto[] = "linguagem C";
    
    char *resultado = strstr(texto, "C");

    if (resultado != NULL) {
        printf("Encontrado: %s\n", resultado);
    }

    return 0;
}