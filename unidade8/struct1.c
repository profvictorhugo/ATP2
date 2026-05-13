#include <stdio.h>

/**
 * exemplo básico do uso de um tipo registro, definido para Pessoa
 */

struct Pessoa{
    char nome[100];
    int idade;
    char sexo;
};

int main(){
    struct Pessoa p1 = {"Victor Hugo Lopes", 43, 'm'};
    printf("Nome: %s\nIdade: %d\nSexo: %c\n\n", p1.nome, p1.idade, p1.sexo);
    struct Pessoa p2;
    printf("Informe o nome da pessoa: ");
    fgets(p2.nome, 100, stdin);
    printf("Informe a idade e sexo: ");
    scanf("%d %c", &p2.idade, &p2.sexo);
    printf("Nome: %s\nIdade: %d\nSexo: %c\n\n", p2.nome, p2.idade, p2.sexo);

    return 0;
}