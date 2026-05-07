#include <stdio.h>

int main(){
    #define NUM_ALUNOS 30
    #define TAM_NOME 100
    char nomes[NUM_ALUNOS][TAM_NOME];
    int matriculas[NUM_ALUNOS];
    float notas[NUM_ALUNOS][4];

    printf("Bem-vindo ao programa!\n");
    for(int i=0; i<NUM_ALUNOS; i++){
        //uma iteração por aluno
        printf("Informe o nome do %dº aluno: ", i+1);
        fgets(nomes[i], TAM_NOME, stdin);
        printf("Informe a matrícula: ");
        scanf("%d", &matriculas[i]);
        printf("Informe as 4 notas: ");
        scanf("%f %f %f %f", &notas[i][0], &notas[i][1],
                             &notas[i][2], &notas[i][3]);
    }

    //calcular médias e apresentar dados
    for(int i=0; i<NUM_ALUNOS; i++){
        printf("------------------------------------------\n");
        printf("Nome:%s\nMatricula:%d\t", nomes[i], matriculas[i]);
        printf("==========================================\n");
        printf("                  NOTAS\n");
        printf("==========================================\n");
        printf("%.2f\t%.2f\t%.2f\t%.2f\n", notas[i][0], notas[i][1], notas[i][2], notas[i][3]);
        float media = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3]) / 4;
        printf("Média do aluno: %.2f\n\n", media);
        printf("\n\n\n\n");

    }

    return 0;
}