#include <stdio.h>

/*
    demonstrando problemas com uso de strings digitadas
*/
//constante para o tamanho das strings
#define T_STRING 100

int main(){
    char frase1[T_STRING];
    char frase2[T_STRING];
    printf("Digite uma frase com espaço em branco:\n ");
    //usando o scanf
    scanf("%s", frase1);
    printf("Frase lida:\n %s\n", frase1);
    printf("Sumiu algo da string digitada??\n\n");
    printf("Vamos resolver!\n");
    printf("Digite uma frase com espaço em branco:\n ");
    //usando o scanf
    scanf(" %[^\n]", frase1);
    printf("Frase lida:\n %s\n", frase1); //<aqui o problema é que o espaço em branco separa 2 variáveis
    printf("Uai??? Deu problema?\n"); 
    printf("Vamos resolver:\n");
    printf("Digite uma frase com espaço em branco:\n ");
    //usando o scanf
    scanf(" %[^\n]", frase1);
    printf("Frase lida:\n %s\n", frase1);
    printf("Vamos a outro método de leitura:\n");
    printf("Digite uma frase com espaço em branco:\n ");
    getchar();
    fgets(frase2, sizeof(frase2), stdin);
    printf("Frase lida: %s\n", frase2);
    return 0;
}