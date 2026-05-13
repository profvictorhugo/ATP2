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
    return 0;
}