#include <stdio.h>

/*
Este é um exemplo da passagem de vetores como parâmetros de funções
Por padrão, em C, todo vetor é sempre passado como referência!!
*/

//protótipo da função
void permuta(int [], int, int);

void ordenaCrescente(int v[], int tamanho){
    for(int i=0; i < tamanho; i++){
        for(int j=0; j < tamanho; j++){
            if(v[i] < v[j]){
                permuta(v, i, j);
            }
        }
    }
}

void ordenaDecrescente(int v[], int tamanho){
    for(int i=0; i < tamanho; i++){
        for(int j=0; j < tamanho; j++){
            if(v[i] > v[j]){
                permuta(v, i, j);
            }
        }
    }
}

int main(){
    int valores[] = {20, 10, 9, 8, 4, 2, 30, 7, 6, 1};
    const long int tamanho = sizeof(valores)/sizeof(int);
    printf("Tamanho do vetor: %ld\n", tamanho);
    printf("Valores na ordem original:\n");
    printf("==================\n");
    for(int i=0; i<tamanho;i++){
        printf("| %dº\t | %d\t |\n", i+1, valores[i]);
    }
    printf("==================\n");

    ordenaCrescente(valores, 10);

    printf("Valores ordenados crescente:\n");
    printf("==================\n");
    for(int i=0; i<sizeof(valores)/sizeof(int);i++){
        printf("| %dº\t | %d\t |\n", i+1, valores[i]);
    }
    printf("==================\n");

    ordenaDecrescente(valores, 10);

    printf("Valores ordenados decrescente:\n");
    printf("==================\n");
    for(int i=0; i<sizeof(valores)/sizeof(int);i++){
        printf("| %dº\t | %d\t |\n", i+1, valores[i]);
    }
    printf("==================\n");


    return 0;
}

/*
função que troca de posição valores do vetor.
`a` passa a ser `b` e vice e versa
*/
void permuta(int v[], int a, int b){
    int aux;
    aux = v[a];
    v[a] = v[b];
    v[b] = aux;
}