#include <stdio.h>
#include <math.h>

//programa base para o exercício 03 da lista da unidade 5 do professor Rogério
//observe que o programa, embora resolva o problema de potência, não
//atende ao que foi pedido no uso de função recursiva

int main(){
    int base, expoente, resultado;
    printf("Bem-vindo ao programa de potencia usando recursividade!\n\n");
    printf("======================================================\n\n");
    printf("Informe a entrada no formato base^expoente: ");
    scanf("%d^%d", &base, &expoente);
    resultado = pow(base, expoente);
    printf("Resultado = %d\n", resultado);
    return 0;
}