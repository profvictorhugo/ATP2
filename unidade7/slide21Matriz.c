#include <stdio.h>

//exercício do slide 21 (aula 3B - unidade 7 de ATP2 - Bacharelado em Engenharia de Software.)
//algoritmo incompleto, faltando ser concluído para atender ao enunciado

void linha(int, char);

int main(){
    int matriz[2][4];
    int busca;
    int achou = 0;
    linha(35, '=');
    printf("Bem-vindo ao programa de matrizes!\n");
    linha(35, '=');
    //leitura dos dados da matriz

    printf("Informe o valor de interesse: ");
    scanf("%d", &busca);
    //buscar a existencia de 'busca' na matriz

    if(achou) printf("Valor encontrado!\n");
    else printf("Valor não encontrado!\n");
    return 0;
}

void linha(int tamanho, char c){
    for(int i=0; i<tamanho; i++){
        printf("%c", c);
    }
    printf("\n");
}