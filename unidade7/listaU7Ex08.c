#include <stdio.h>
#include <string.h>

const int TAM_FRASE = 100;
//exercício 08 da lista da Unidade 07
// veja o vídeo em https://youtube.com/shorts/x4oXBTqmzEw

//protótipos das funções
void removeQuebra(char*);
int contaPalavras(char*);


int main(){
    int n, palavras = 0;
    printf("Informe a quantidade de frases a serem lidas: "); 
    scanf("%d", &n);
    getchar();
    char frases[n][TAM_FRASE];
    for(int i=0; i<n; i++){
        printf("Informe a %dª frase: ", i+1);
        fgets(frases[i], TAM_FRASE, stdin);
        //removendo a quebra de linha na frase causada pelo fgets
        removeQuebra(frases[i]);
        palavras += contaPalavras(frases[i]);
    }
    printf("As frases informadas contém %d palavras.\n", palavras);
    return 0;
}

/*
* a função abaixo recebe uma string, obtêm o tamanho real (todos caracteres até a parada \0)
* testa se o último caracter é uma quebra de linha \n
* e troca por \0 em caso afirmativo
* como vetor passado como parâmetro é uma passagem por referência, a alteração
* na string já afeta o vetor de strings original
* por isso não há retorno na função
*/
void removeQuebra(char *str){
    long unsigned int t = strlen(str);
    if(t > 0 && str[t-1] == '\n')
        str[t-1] = '\0';
}

int contaPalavras(char *str){
    int count = 0;
    if (strlen(str) > 1) count++; //se há, pelo menos um caracter, já assumimos ser uma palavra
    //esta eh uma frase
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    return count;

}