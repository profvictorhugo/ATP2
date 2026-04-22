#include <stdio.h>

void imprimeVetor(float v[], int tam){
    printf("[");
    for(int i=0; i<tam-1;i++){
        printf("%.2f, ", v[i]);
    }
    printf("%.2f",v[tam-1]);
    printf("]");
}

int main(){
    float vetor[] = {4.0, 11.1, 7.6, 29.0, 8.6, 11.7, 14.4, 12.5, 13.0, 13.5, 13.6, 16.2, 17.5, 28.7, 28.3, 20.1, 20.4};
    int tam_ma = 3;
    long int tamanho_vetor = sizeof(vetor)/sizeof(vetor[0]);
    float novo[tamanho_vetor];
    for(int i=0;i<tamanho_vetor-2;i++){
        float soma = 0.0;
        //laço para rodar tam_ma vezes
        for(int j=i; j < tam_ma + j; j++)
            soma+=vetor[j];
        novo[i] = soma / tam_ma;
    }
    novo[tamanho_vetor-1] = vetor[tamanho_vetor-1];
    novo[tamanho_vetor-2] = vetor[tamanho_vetor-2];
    printf("-============== Vetor Original ===============-\n");
    imprimeVetor(vetor, tamanho_vetor);
    printf("\n\n");
    printf("-============== Vetor Ajustado ===============-\n");
    imprimeVetor(novo, tamanho_vetor);
    return 0;
}