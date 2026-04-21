#include <stdio.h>
#include <ctype.h>

//programa que transforma um número lido como string em
//um vetor de dígitos [0..9], antes checando se é um dígito válido

//constante para o tamanho máximo de uma string
#define TAM_STR 100

void converteVetor(int v[], int tamanho, char *novaStr) {
    for(int i=0; i< tamanho; i++){
        if(v[i] == -5) break;
        novaStr[i] = v[i] + '0';
    }
}

void removeQuebra(char in[], int tamanho){
    for(int i=0; i<tamanho;i++){
        if(in[i]=='\n')
            in[i] = '\0';
    }
}

int main(){
    char numero_str[TAM_STR];
    int numeros[TAM_STR-1] = {0};
    fgets(numero_str, TAM_STR, stdin);
    removeQuebra(numero_str, TAM_STR);
    for(int i=0; i<TAM_STR-1; i++){
        if(numero_str[i] == '\0'){
            numeros[i] = -5;
            break;
        }
        if (isdigit(numero_str[i]))
            //numeros[i] = (int)numero_str[i];//abordagem errada, pois converte o código ascii
            numeros[i] = numero_str[i] - '0';
        else
            numeros[i] = -1;
    }
    char resultado[TAM_STR]; 
    converteVetor(numeros, TAM_STR, resultado);
    printf("Número lido convertido em vetor de ints: %s\n", resultado);
    return 0;
}