#include <stdio.h>
#include <string.h>

typedef enum {
    DISPONIVEL,
    EMPRESTADO
} StatusLivro;

typedef struct {
    char titulo[100];
    char autor[100];
    int ano;
    StatusLivro status;
} Livro;

int main() {

    // seu código aqui

    return 0;
}