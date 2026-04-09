#include <stdio.h>

/*
* Resolução do exercício 2 da lista da unidade 6
*/

void escreveVetor(int v[], int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("O numero %d = %d \n", i, v[i]);
    }
}

float media(int v[], int tamanho){
    int soma = 0;
    for(int i = 0; i<tamanho; i++){
        soma += v[i];
    }
    return soma / tamanho;
}

//protótipo da função - Ela está definida após a função main()
int soma(int [], int);

int main(){
    int valores[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long int tamanho = sizeof(valores)/sizeof(valores[0]);
    //Atenção, a leitura conforme o enunciado está desativada abaixo.
    /*for(int i=0; i<tamanho; i++){
        printf("Informe o numero %d: \n", i+1);
        scanf("%d", &valores[i]);
    }*/
    escreveVetor(valores, tamanho);
    printf("Media dos valores = %f\n", media(valores, tamanho));
    int valor_soma = soma(valores, tamanho);
    printf("Soma dos elementos do vetor: %d\n", valor_soma);
    return 0;
}

int soma(int *v, int tamanho){
    int total = 0;
    for(int i=0; i<tamanho; i++)
        total += v[i];

    return total;
}