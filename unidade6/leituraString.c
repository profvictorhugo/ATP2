#include <stdio.h>

#define TAM_STR 100
//const int TAM_STR = 100;

void removeQuebra(char nome[TAM_STR]){
    //percorrendo a string para remover quebras de linha
    for(int i=0; i<TAM_STR; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
        }
    }

}

int main(){
    char nome[TAM_STR] = "Victor Hugo";
    scanf("%[^\n]s", nome);
    getchar();
    printf("Nome lido: %s\n", nome);
    fgets(nome, TAM_STR, stdin);
    printf("Saída usando fgets:\n");
    char novo_nome[TAM_STR];
    for(int i=0;i<TAM_STR;i++){
        novo_nome[i] = nome[i];
    }
    removeQuebra(novo_nome);

    printf("%s",nome);
    
    return 0;
}