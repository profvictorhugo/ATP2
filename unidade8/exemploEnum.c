#include <stdio.h>
//trabalhando com 
//lista enumerada
//em C
//Lista de produtos
//com status
typedef struct{
    char nome[100];
    int codigo;
    float valor;
    int quantidade;
    int status;//0=inativo, 1=ativo
}Produto;
typedef enum{
    Inativo, Ativo
}Status;
int main(){
    Produto lista1[] = {
        {"Pamonha doce", 1234, 12.0, 10, Ativo},
        {"Pamonha salgada", 1235, 15.0, 10, Inativo}
    };
    for(int i=0; i<sizeof(lista1)/sizeof(Produto);i++){
        //só imprime os ativos
        if(lista1[i].status == Ativo){
            printf("============\n");
            printf("Produto: %s\n", lista1[i].nome);
            printf("R$ %.2f\n", lista1[i].valor);
        }            
    }
    return 0;
}