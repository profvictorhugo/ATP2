#include <stdio.h>

int main(){
    int n, conta = 0;
    printf("Bem-vindo ao programa de contagem de numeros!\n\n");
    printf("====================================================\n\n");
    printf("Informe um numero inteiro qualquer: ");
    scanf("%d", &n);
    for(int i=n; i>=0; i--){
        conta++;
    }
    printf("Pelo metodo iterativo - Entre %d e 0 temos %d numeros!\n\n", n, conta);
    return 0;
}