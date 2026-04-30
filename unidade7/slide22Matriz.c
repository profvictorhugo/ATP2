#include <stdio.h>

//exercício do slide 22 (aula 3B - unidade 7 de ATP2 - Bacharelado em Engenharia de Software.)
//algoritmo incompleto, faltando ser concluído para atender ao enunciado

void linha(int, char);

void imprimeMatriz(int m, int n, int matriz[m][n]){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matriz[4][4];
    linha(35, '=');
    printf("Bem-vindo ao programa de matrizes!\n");
    linha(35, '=');
    //leitura dos dados da matriz
    for(int i=0;i<4;i++){
        printf("Informe os 4 valores para a linha número %d:\n", i+1);
        for(int j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Apresentando a matriz conforme as regras:\n\n");
    linha(35, '=');
    
    //varrer cada linha
    for(int i=0;i<4;i++){
        if(i%2==0){
            //se par, decrescente
            //ordenar o vetor
            int troca;
            for(int j=0;j<3;j++){
                for(int m=j+1;m<4;m++){
                    if(matriz[i][j] < matriz[i][m]){
                        troca = matriz[i][j];
                        matriz[i][j] = matriz[i][m];
                        matriz[i][m] = troca;
                    }
                }
            }
        }else{
            //se ímpar, crescente
            //ordenar o vetor
            int troca;
            for(int j=0;j<3;j++){
                for(int m=j+1;m<4;m++){
                    if(matriz[i][j] > matriz[i][m]){
                        troca = matriz[i][j];
                        matriz[i][j] = matriz[i][m];
                        matriz[i][m] = troca;
                    }
                }
            }
        }
    }

    imprimeMatriz(4, 4, matriz);
    
    return 0;
}

void linha(int tamanho, char c){
    for(int i=0; i<tamanho; i++){
        printf("%c", c);
    }
    printf("\n");
}