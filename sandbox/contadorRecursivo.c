#include <stdio.h>

//problema: função somatório
//com recursividade
int somaRec(int n){
    //caso base
    if(n==1)
        return 1;
    else{
        //caso recursivo
        return n + somaRec(n-1);
    }
}

int main(){
    //Fazendo de forma
    //iterativa
    int soma = 0;
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n;i++){
        soma += i;
    }
    printf("A soma dos n números: %d\n", soma);
    soma = somaRec(n);
    printf("A soma dos n números: %d\n", soma);
    return 0;
}