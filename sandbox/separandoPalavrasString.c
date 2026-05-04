#include <stdio.h>

int main(){
    char frase[100] = "Esta eh uma frase qualquer";
    //Passo 1: saber quantas palavras há
    int cont = 0;
    //assumindo que cada espaço separa 2
    //palavras
    for(int i=0; i<100; i++){
        if(frase[i] == ' ')
            cont++;
        if(frase[i] == '\0')
            break;
    }
    cont++;
    //Passo 2: separar as palavras
    char palavras[cont][20];
    int ii=0;
    int jj=0;
    int em_palavra = 0;
    for(int i=0; i<100; i++){
        char c = frase[i];
        if(c != ' ' && c != '\0'){
            //estamos dentro de
            //palavra
            palavras[ii][jj++] = c;
            em_palavra = 1;
        }else{
            //ops, ou acabou a frase
            //ou a palavra
            if(em_palavra){
                em_palavra = 0;
                ii++;
                jj = 0;
            }
        }
    }
    //Passo 3: apresentar as palavras
    for(int i=0; i<cont; i++){
        printf("Palavra %d: %s\n", i+1, palavras[i]);
    }
    return 0;
}