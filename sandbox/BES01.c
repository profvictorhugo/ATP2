#include <stdio.h>

#define TAM 100

typedef enum{
    Matutino, Vespertino, Noturno, Integral
}Turno;
typedef enum{
    Masculino, Feminino
}Genero;
typedef enum{
    Primeiro=1, Segundo, Terceiro, Quarto, Quinto, Sexto, Setimo, Oitavo, Nono
}Semestre;
typedef struct{
    char nome[TAM];
    int matricula;
    char email[TAM];
    Genero genero;
}Professor;
typedef struct{
    char nome[TAM];
    int codigo;
    int cargaHoraria;
    Semestre semestre;
    Professor profResp;
}Disciplina;
typedef struct{
    const char nome[TAM];
    int totalSemestres;
    int cargaHorariaTotal;
    Turno turnoCurso;
    Professor coordenador;
    Disciplina disciplinas[30];
    Professor professores[30];
}Curso;


int main(){
    //char texto[100] = "este é um texto qualquer";
    Curso BES = {
        "Bacharelado em Engenharia de Software",
        9,
        3000,
        Noturno,
        {"Victor Hugo Lopes", 202020, "victor.lopes@ifg.edu.br", Masculino},
        {
            {"Algoritmos 1", 101010, 54, Primeiro, 
                {"Victor Hugo Lopes", 202020, "victor.lopes@ifg.edu.br", Masculino}
            },
            {"Algoritmos 1", 101020, 54, Segundo, 
                {"João da Silveira", 302020, "joao.silveira@ifg.edu.br", Masculino}
            }
        },
        {
            {"Victor Hugo Lopes", 202020, "victor.lopes@ifg.edu.br", Masculino},
            {"João da Silveira", 302020, "joao.silveira@ifg.edu.br", Masculino}
        }
    };
    printf("Nome do curso: %s\n", BES.nome);
    printf("Primeira disciplina do curso: %s\n", BES.disciplinas[0].nome);
    return 0;
}