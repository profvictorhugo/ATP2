#include <stdio.h>  

//função para realizar a soma
/*
    Realiza a soma de dois números, n e t
    Retorna o valor após a soma
*/
float soma(float numero, float total){
    total = total + numero;
    return total;
}
void somaRef(float n, float *t){
    *t = *t + n;
}
float subtracao(float n, float t){
    return t - n;
}
float multiplicacao(float n, float t){
    return t * n;
}
float divisao(float n, float t){
    return t / n;
}
void saudacao(){
    printf("Bem-vindo à calculadora Master:\n");
}
void moldura(int largura){
    for(int i=0; i<largura; i++){
        printf("=");
    }
    printf("\n");
}

void limpaBuffer(){
    getchar();//limpando o buffer de forma rápida
}

int main(){
    float numero, total = 0.0;
    char operador;
    moldura(40);
    saudacao();
    moldura(40);
    while(1){
        printf("Digite um número: ");
        scanf("%f", &numero);
        limpaBuffer();
        printf("Digite o operador desejado (+ - * /):");
        scanf("%c", &operador);
        limpaBuffer();
        if(operador == '+'){
            //total = soma(numero, total);
            somaRef(numero, &total);
        }else if(operador == '-'){
            total = subtracao(numero, total);
        }else if(operador == '*'){
            total = multiplicacao(numero, total);
        }else if(operador == '/'){
            total = divisao(numero, total);
        }else{
            printf("Operador não permitido!\n");
            break;
        }
        printf("Total: %.2f\n", total);
    }
    return 0;
}