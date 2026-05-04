#include <stdio.h>
// Exercício número 09 - Lista Unidade 07
// Bacharelado em Engenharia de Software -IFG Inhumas
// Algoritmos e Técnicas de Programação 2
// Enunciado: alterar o programa do exercício 08 (ler n frases e contar
// quanta palavras existem em todas as frases)
// Agora precisamos separar todas as palavras em um vetor de palavras.

int contaPalavrasEm(char frase[], int tam){
    int conta = 0;
    for(int i=0; i<tam;i++){
        if(frase[i] == ' '){
            conta++;
        }
        if(frase[i] == '\n' || frase[i] == '\0')
            break;
    }
    conta++; //"Frase de exemplo" tem 2 espaços, mas 3 palavras
    return conta;
}

void removeQuebra(char frase[]){
    int i=0;
    while(1){
        if(frase[i] == '\0') break;
        if(frase[i] == '\n')
            frase[i] = '\0';
        i++;
    }
}

int main(){
    //passo 1: saber quantas frases serão inseridas
    int n;
    printf("Informe a quantidade de frases: ");
    scanf("%d", &n);
    int total_palavras[n];
    getchar(); //resolvendo o lixo
    char frases[n][100];
    //passo 2: ler as frases e contar quantas palavras existem
    for(int i=0; i<n; i++){
        printf("Informe a %dª frase: ", i+1);
        fgets(frases[i], 100, stdin);
        removeQuebra(frases[i]);
        total_palavras[i] = contaPalavrasEm(frases[i], 100);        
    }
    //passo 3: saber quantas palavras no total e criar a matriz de palavras
    int total_todas_palavras = 0;
    for(int i=0; i<n;i++){
        total_todas_palavras+=total_palavras[i];
    }
    char palavras[total_todas_palavras][20];
    //passo 4: separar as palavras
    int p = 0; //índice da palavra atual
    for(int i=0; i<n; i++){
        int ii=0; // índice na frase
        int jj=0; //índice na palavra sendo escrita
        int em_palavra = 0; //boleano para controlar se está dentro de palavra na frase
        //varrer a frase atual
        for(int j=0; j<100; j++){
            char c = frases[i][j];
            if(c != ' ' && c != '\0' && c != '\n'){
                //estamos dentro de uma palavra
                palavras[p][jj++] = c;
                em_palavra = 1;
            }else{
                //ops, ou acabou a frase ou a palavra
                if (em_palavra){
                    //fim da palavra
                    palavras[p][jj] = '\0';
                    p++;
                    em_palavra = 0;
                    jj = 0;
                }
                if (c == '\0') break;
            }
        }
    } 

    //passo 5: imprimir as palavras por frase
    for(int i=0; i<total_todas_palavras; i++){
        printf("Palavra %d: %s\n", i+1, palavras[i]);
    }

    return 0;
}