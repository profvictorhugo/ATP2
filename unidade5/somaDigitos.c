#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero % 10; // pega o último dígito
        numero = numero / 10;     // remove o último dígito
    }

    printf("Soma dos digitos: %d\n", soma);

    return 0;
}