#include <stdio.h>

/** 
 * Exemplo de código para demonstrar o uso de variáveis, funções e passagem por referência em C.
 * Usando debugger para entender o fluxo de execução e o comportamento das variáveis.
 */

 
int soma(int a, int b) {
    const int resultado = a + b;
    return resultado;
}

void soma_referencia(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}

int main() {
    printf("Hello, World!\n");
    int resultado = soma(5, 3);
    printf("Resultado da primeira soma: %d\n", resultado);
    int a, b;
    printf("Digite dois números para somar: ");
    scanf("%d %d", &a, &b);
    soma_referencia(&a, &b, &resultado);
    printf("Resultado da soma por referência: %d\n", resultado);
    return 0;
}