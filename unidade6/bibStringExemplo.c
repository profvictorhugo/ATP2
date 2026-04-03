#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], completo[100];

    printf("Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Sobrenome: ");
    fgets(sobrenome, 50, stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';

    strcpy(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);

    printf("Nome completo: %s\n", completo);
    printf("Tamanho: %lu\n", strlen(completo));

    return 0;
}