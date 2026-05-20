#include <stdio.h>

//abrindo um arquivo contendo
//textos 
//lendo e apresentando seu conteúdo

int main(){
    FILE *arq = fopen("arquivo2.txt", "r");
    char fraseLida[3][100];
    for(int i=0; i<3; i++){
        fgets(fraseLida[i], 100, arq);
        printf("%s\n", fraseLida[i]);
    }
    fclose(arq);
    return 0;
}