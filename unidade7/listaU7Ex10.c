#include <stdio.h>

/*
* exercício 10 da lista de exercícios da Unidade 07 - Bacharelado em Engenharia de Software IFG Inhumas-GO
* Algoritmos e técnicas de programação 2 - ATP 2
* prof. Dr. Victor Hugo Lopes
* Enunciado resumido: leia os números de um sudoku
* 9x9 e diga se está correto
* Correto se:
* 1) todas as linhas contendo 1 a 9
* 2) todas as colunas contendo 1 a 9
* 3) todos os quadrantes contendo 1 a 9
*/
/*
Para executar, apenas cole o conteúdo no terminal. O jogo abaixo está correto!
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9


*/

int checaLinhaColuna(int vetor[], int tam){
    int soma = 0;
    for(int i=0; i<tam; i++){
        soma += vetor[i];
        if (soma > 45) return 0;
    }
    if (soma == 45)
        return 1;
    else return 0;
}

void colunaParaLinha(int m, int n, int matriz[m][n], int col, int vetor[]){
    for(int i=0; i<n; i++){
        vetor[i] = matriz[i][col];
    }
}

int checaQuadrante(int m, int n, int matriz[m][n], int mi, int mf, int ni, int nf){
    int soma=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i>=mi && i<=mf && j>=ni && j<=nf){
                soma+=matriz[i][j];
                matriz[i][j] = -1;
                if (soma > 45) return 0;
            }
        }
    }
    if (soma == 45)
        return 1;
    else return 0;
}

int main(){
    #define TAM_M 9
    #define TAM_N 9
    int sudoku[TAM_M][TAM_N];
    int valido = 0;
    for(int i=0; i<TAM_M; i++){
        for(int j=0; j<TAM_N; j++){
            scanf("%d", &sudoku[i][j]);
        }
    }

    for(int i=0; i<TAM_M; i++){
        valido = checaLinhaColuna(sudoku[i], TAM_M);
    }
    for(int i=0; i<TAM_N; i++){
        int vetor[TAM_N] = {0};
        colunaParaLinha(TAM_M, TAM_N, sudoku, i, vetor);
        valido = checaLinhaColuna(vetor, TAM_N);
    }
    //primeira
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 0, 2, 0, 2);
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 3, 5, 0, 2);
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 6, 8, 0, 2);
    //segunda coluna
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 0, 2, 3, 5);
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 3, 5, 3, 5);
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 6, 8, 3, 5);
    //terceira coluna
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 0, 2, 6, 8);
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 3, 5, 6, 8);
    valido = checaQuadrante(TAM_M, TAM_N, sudoku, 6, 8, 6, 8);

    if(valido) printf("Sudoku correto!!\n\n");
    else printf("Sudoku inválido!!!\n\n");

    for(int i=0; i<TAM_M; i++){
        for(int j=0; j<TAM_N; j++){
            printf("%d\t", sudoku[i][j]);
        }
        printf("\n");
    }

    return 0;
}