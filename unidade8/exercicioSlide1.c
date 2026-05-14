#include <stdio.h>

//exercício do slide 18 da aula de structs (unidade 8)
//incompleto!

typedef struct{
    char item[10];
    char descricao[100];
    float quantidade;
    char unidade[5];
    float precoUnitario;
    char obs[100];
    float custoTotal;
}Mercadoria;

#define ITENS_VENDA 10

int main(){
    Mercadoria venda[ITENS_VENDA];
    for(int i=0; i<ITENS_VENDA; i++){
        printf("Informe o código do item: ");
        fgets(venda[i].item, 10, stdin);
        printf("Informe a descrição do item: ");
        fgets(venda[i].descricao, 100, stdin);
        printf("Informe a quantidade: ");
        scanf("%f", &venda[i].quantidade);
    }

    //escrevendo 
    float total = 0.0;
    for(int i=0; i<ITENS_VENDA; i++){
        printf("Item\tDescrição\tQuant.\tUnidade\tPreço Unit.\tObs\tCusto Total\n");
        printf("%s\t",venda[i].item);
        printf("%s\t",venda[i].descricao);
        printf("%d\t%s\t",venda[i].quantidade,venda[i].unidade);
        printf("%.2f\t",venda[i].precoUnitario);
        printf("%s\t",venda[i].obs);
        printf("%.2f\n",venda[i].custoTotal);
        total+=venda[i].custoTotal;
    }
    printf("Custo total: %.2f\n", total);

    return 0;
}