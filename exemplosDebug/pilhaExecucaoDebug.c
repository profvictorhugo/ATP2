#include <stdio.h>

/*
* Exemplo de código para demonstrar a pilha de execução em C.
* Usando debugger para entender como as funções são chamadas e como a pilha de execução é gerenciada.
*/

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
}

int main() {
    printf("Iniciando o programa\n");
    funcaoC();
    printf("Finalizando o programa\n");
    return 0;
}