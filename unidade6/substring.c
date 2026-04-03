#include <stdio.h>

#define T_STRING 100

void removeQuebra(char[], int);

int main(){
    char nome[T_STRING];
    char busca[T_STRING];
    printf("Digite a frase: \n");
    //scanf(" %[^\n]", nome); //resolvendo problema do espaço vazio em strings com scanf
    fgets(nome, sizeof(nome), stdin);//outra abordagem para resolver espaço vazio. Porém, gera o problema do enter vir na string
    removeQuebra(nome, T_STRING);//remove o enter do fim da string (problema do fgets)
    printf("Digite a palavra a ser buscada: \n");
    scanf("%s", busca);
    int achou = 0;
    for(int i=0; i < T_STRING; i++){
        for(int j=0; j < T_STRING; j++){
            if(nome[i] != busca[j]){
                break;
            }else achou = 1;
            if(nome[i] == '\0' || busca[j] == '\0') break;
        }
    }
    if(achou){
        printf("%s encontrada na frase\n", busca);
    }
    return 0;
}

void removeQuebra(char s[], int t){
    for(int i=0; i < t; i++){
        if(s[i] == '\n')
            s[i] = '\0'; //trocando a quebra de linha (enter) por null terminator
    }
}