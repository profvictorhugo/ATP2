#include <stdio.h>
#define TAM_STR 100

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct{
    int ddd;
    int numero;
}Telefone;

typedef struct{
    char nome[TAM_STR];
    Data dataNascimento;
    char nomeMae[TAM_STR];
    char nomePai[TAM_STR];
    char endereco[TAM_STR];
    Telefone telefonesContato[5];
    char emergencia[TAM_STR];
    int temAlergia;
    char alergia[TAM_STR];
    char restricaoAlimentar[TAM_STR];
    char medicamentos[TAM_STR];
}Aluno;

int main(){
Aluno ze = {"José Pequeno", {10, 10, 2000}, "Mãe do Zé", "Filisbino Zé",
            "Rua do Seu Zé S/N", {{62, 66669999}, {62, 99996666}}, "Ligar pro Batman",
            0, "nsa", "Broa salgada", "Engov"};
    Aluno alunos[] = {
        {"José Pequeno", {10, 10, 2000}, "Mãe do Zé", "Filisbino Zé",
            "Rua do Seu Zé S/N", {{62, 66669999}, {62, 99996666}}, "Ligar pro Batman",
            0, "nsa", "Broa salgada", "Engov"},
        {"José Grande", {10, 10, 1999}, "Mãe do Zé", "Filisbino Zé",
            "Rua do Seu Zé S/N", {{62, 66669999}, {62, 99996666}}, "Ligar pro Miranha",
            0, "nsa", "Broa de cangica", "nsa"}
    };
    return 0;
}