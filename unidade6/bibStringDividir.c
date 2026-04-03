#include <stdio.h>
#include <string.h>

/**
 * usando a biblioteca string.h
 * Divide uma string
 */

int main() {
    char texto[] = "maça,banana,uva";

    char *token = strtok(texto, ",");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}