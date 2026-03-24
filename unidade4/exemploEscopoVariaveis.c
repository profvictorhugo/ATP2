#include <stdio.h>

// Variável global
int x = 10;

void funcao() {
    // Variável local da função
    int x = 20;

    printf("Dentro da funcao, x = %d\n", x);
}

void funcao_ref(int *xref){
    printf("Dentro da funcao por referencia, antes da alteracao, x = %d\n", x);
    *xref *= 10;
    printf("Dentro da funcao por referencia, apos a alteracao, x=%d\n", x);
    
}

int main() {
    printf("No main (antes da funcao), x = %d\n", x);

    funcao();

    printf("No main (depois da funcao), x = %d\n", x);

    funcao_ref(&x);

    printf("No main (apos funcao por referencia), x = %d\n", x);

    return 0;
}