#include <stdio.h>

//programa que procura e conta as ocorrências de uma letra informada
//pelo usuário na string

int main(){
    char nome[] = "Esta eh uma frase simples para teste";
    char letra;
    int contador = 0;
    printf("Digite a letra para buscar na string: ");
    scanf("%c", &letra);
    long int tamanho = sizeof(nome); // sizeof(vetor)/sizeof(int)
    for(int i=0; i<tamanho; i++){
        if(nome[i] == letra){
            contador++;
        }
    }
    printf("A string informada possui %d letras '%c'\n", contador, letra);

    return 0;
}