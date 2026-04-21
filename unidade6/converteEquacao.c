#include <stdio.h>
#include <ctype.h>

#define TAM 100
#define MAX_TERMS 3

int main(){

    char eq[TAM];

    printf("Digite a equacao (ex.: 2x+3y+z=2): ");
    fgets(eq, TAM, stdin);

    char variaveis[TAM];
    int constantes[TAM];
    char operadores[TAM];

    int vi = 0, ci = 0, oi = 0;

    for (int i = 0; eq[i] != '\0'; i++) {

        // Se for número → constante
        if (isdigit(eq[i])) {
            constantes[ci++] = eq[i] - '0';
        }

        // Se for letra → variável
        else if (isalpha(eq[i])) {
            variaveis[vi++] = eq[i];
        }

        // Se for operador relevante
        else if (eq[i] == '+' || eq[i] == '-' || eq[i] == '=' ) {
            operadores[oi++] = eq[i];
        }
    }

    // Imprimindo resultados
    printf("\nConstantes: ");
    for (int i = 0; i < ci; i++) {
        printf("%d ", constantes[i]);
    }

    printf("\nVariaveis: ");
    for (int i = 0; i < vi; i++) {
        printf("%c ", variaveis[i]);
    }

    printf("\nOperadores: ");
    for (int i = 0; i < oi; i++) {
        printf("%c ", operadores[i]);
    }

    printf("\n");
    return 0;
}