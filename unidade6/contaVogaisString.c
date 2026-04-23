#include <stdio.h>
#include <ctype.h>
//const int TAM_MAX = 100;
#define TAM_MAX 100

int posicao(char letra){
    switch(letra){
        case 'a':
            return 0;
        case 'e':
            return 1;
        case 'i':
            return 2;
        case 'o':
            return 3;
        case 'u':
            return 4;
    }
    return 10;
}

int main(){
    char frase[TAM_MAX];
    int vogais[5] = {0}; //0=a, 1=e, 2=i, 3=o, 4=u
    printf("Digite a frase:");
    scanf("%[^\n]", frase);
    for(int i=0;i<TAM_MAX; i++){
        vogais[posicao(frase[i])]++;
    }
    return 0;
}