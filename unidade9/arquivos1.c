#include <stdio.h>

int main(){
    FILE *arq = fopen("arquivos/um.txt", "w");
    fprintf(arq, "Texto escrito via programa em C\n");
    fclose(arq);
    printf("Pronto!\n\n");
    return 0;
}