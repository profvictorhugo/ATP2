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

    Livro livros[10] = {
    {"Dom Casmurro", "Machado de Assis", 1899, DISPONIVEL},
    {"O Cortiço", "Aluísio Azevedo", 1890, DISPONIVEL},
    {"Capitães da Areia", "Jorge Amado", 1937, EMPRESTADO},
    {"1984", "George Orwell", 1949, DISPONIVEL},
    {"O Senhor dos Anéis", "J.R.R. Tolkien", 1954, EMPRESTADO},
    {"Harry Potter e a Pedra Filosofal", "J.K. Rowling", 1997, DISPONIVEL},
    {"A Revolução dos Bichos", "George Orwell", 1945, DISPONIVEL},
    {"Memórias Póstumas de Brás Cubas", "Machado de Assis", 1881, EMPRESTADO},
    {"O Pequeno Príncipe", "Antoine de Saint-Exupéry", 1943, DISPONIVEL},
    {"Crime e Castigo", "Fiódor Dostoiévski", 1866, DISPONIVEL}
    };

    Livro biblioteca[10];
    for(int i=0; i<10; i++){
        fgets(biblioteca[i].titulo, 100, stdin);
        fgets(biblioteca[i].autor, 100, stdin);
        scanf("%d", &biblioteca[i].ano);
        int tp;
        scanf("%d", &tp);
        if(tp == 0)
            biblioteca[i].status = DISPONIVEL;
        else if(tp == 1)
            biblioteca[i].status = EMPRESTADO;
        else {
            printf("Opção inválida\n");
            return 1;
        }
    }

    return 0;
}