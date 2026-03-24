#include <stdio.h>
#include <limits.h>

int main(){
    int maior = INT_MIN;
    int menor = INT_MAX;
    int valor, n, soma = 0;

    printf("Bem-vindo ao nosso classificador!\n\n");
    printf("Informe a quantidade de numeros que vamos classificar: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Informe o %dº numero: ", i+1);
        scanf("%d", &valor);
        maior = (valor > maior) ? valor : maior;
        menor = (valor < menor) ? valor : menor;
        soma += valor;
    }

    printf("Tarefa concluida com sucesso!\n\n");
    printf("Resultados:\n");
    printf("==========================================================\n");
    printf("Lidos\tMaior\tMenor\tSoma\n");
    printf("----------------------------------------------------------\n");
    printf("%d\t%d\t%d\t%d\n\n", n, maior, menor, soma);
    printf("==========================================================\n");

    return 0;
}