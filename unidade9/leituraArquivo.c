#include <stdio.h>

int main(){
    FILE *arq = fopen("arquivo1.txt", "r");
    char c;
    char frase[100];
    int i=0;
    do{
        c = fgetc(arq);
        printf("%c", c);
        frase[i++] = c;
    }while(c != '\n');
    fclose(arq);
    printf("Frase lida: %s\n", frase);
    return 0;
}