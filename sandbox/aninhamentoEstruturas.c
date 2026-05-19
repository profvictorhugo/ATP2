#include <stdio.h>

//como criar uma estrutura para:

// produto:
//    código
//    nome
//    descrição
//    Valor unitário
//    Quantidade em estoque
//    Categoria
//    Status 
typedef enum{
    Inativo, Ativo
}Status;
typedef struct{
    char nome[100];
    char descricao[100];
}Categoria;

typedef struct{
    int codigo;
    char nome[100];
    char descricao[100];
    float valorUnitario;
    int qtdEstoque;
    Categoria categoria;
    Status status;
}Produto;

int main(){
    Produto arroz;
    printf("Produto: (%d) - %s\n", arroz.codigo, arroz.nome);
    return 0;
}