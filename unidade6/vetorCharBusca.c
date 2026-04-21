#include <stdio.h>

//programa que procura se existe uma palavra na string
//Também usa função para contar qualtas letras efetivamente existem
//desconsiderando \0

int contaLetras(char vetor[], int t){
    int contador=0;
    for(int i=0;i<t;i++){
        if(vetor[i] != '\0'){
            contador++;
        }
    }
    return contador;
}

int main(){
    char nome[] = "Esta eh uma frase simples para teste";
    char palavra[20];
    int contador = 0;
    printf("Digite a palavra para buscar na string: ");
    scanf("%s", palavra);
    long int tamanho = sizeof(nome); // sizeof(vetor)/sizeof(int)
    long int tamanhoP= contaLetras(palavra, 20);
    int controle = 0;
    int j=0;
    for(int i=0; i<tamanho; i++){
        if(nome[i] == palavra[j]){
                controle++;
                j++;
                if(controle == tamanhoP) break;
        }else{
                j = 0;
        }
    }
    if(controle == tamanhoP){
        printf("Palavra existe na frase!\n");
    }

    return 0;
}