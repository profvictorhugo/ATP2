#include <stdio.h>

//abrindo um arquivo contendo
//texto
//lendo e apresentando seu conteúdo

int main(){
    FILE *arq = fopen("arquivo1.txt", "r");
    char fraseLida[100];
    fgets(fraseLida, 100, arq);
    printf("%s\n", fraseLida);
    fclose(arq);
    return 0;
}