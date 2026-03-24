#include <stdio.h>

int soma(int, int);
int dobro(int);

int main(){

    int a, b;

    printf("Bem-vindo ao novo programa.\n\n");
    printf("Informe os valores de A e B: \n");
    scanf("%d %d", &a, &b);

    printf("A soma de A com B = %d\n", soma(a, b));
    printf("O dobro de A = %d\n", dobro(a));
    printf("O dobro de B = %d\n", dobro(b));

    printf("A soma do dobro de A com o dobro de B = %d\n", dobro(a) + dobro(b));

    return 0;
}

int soma(int a, int b){
    return 0;
}

int dobro(int n){
    return 0;
}