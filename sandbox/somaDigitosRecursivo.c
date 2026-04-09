#include <stdio.h>

int soma(int numero){
    int total = 0;
    //caso base
    if(numero == 0) return 0;
    else{
        // Caso recursivo
        int i = (numero % 10) + soma(numero / 10);
        return i; 
    }
}

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Soma dos digitos: %d\n", soma(numero));

    return 0;
}
/*
somaDigitos(123)
= 3 + somaDigitos(12)
= 3 + (2 + somaDigitos(1))
= 3 + 2 + (1 + somaDigitos(0))
= 3 + 2 + 1 + 0
= 6
*/