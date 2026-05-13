#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    char descricao[100];
    float precoUnitario;
    int qtdEstoque;
}Produto;

/**
 * função para imprimir um produto, antes testando para saber se
 * está preenchido, usando string.h strlen
 */
void imprimeProduto(Produto p){
    //if (p.nome != ""){ //erro
    int i = strcmp(p.nome, "");//outra forma de saber se está vazio (caso i==0).
    if(strlen(p.nome) > 0){
        printf("Nome do produto: %s\n", p.nome);
    }
}

int main(){
    Produto lista[5] = {
        {"Rebinboca", "Rebinboca do Fusca 70-82", 29.90, 10},
        {"Maçaneta porta", "Aplicação: fusca e brasília", 98.00, 5},
        {"Giromba do freio", "Capa do freio de mão", 50.00, 8}
    };
    for(int i=0; i<sizeof(lista)/sizeof(Produto); i++){
        imprimeProduto(lista[i]);
    }
    return 0;
}