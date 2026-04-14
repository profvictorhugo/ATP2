#include <stdio.h>

int somaRec(int v){
    //caso base
    if(v == 1){
        return 1;
    }
    return v + somaRec(v-1);
}

int somaIt(int v){
    int total = 0;
    for(int i=v; i>0; i--){
        total += i;
    }
    return total;
}

int main(){
    int total=0, n;
    scanf("%d", &n);
    printf("Modo iterativo = A soma de todos os numeros entre n e 1 = %d\n", somaIt(n));
    total = somaRec(n);
    printf("Modo recursivo = A soma de todos os numeros entre n e 1 = %d\n", total);
    return 0;
}