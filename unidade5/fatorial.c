#include <stdio.h>

int main(){
    long int n;
    long unsigned int fat = 1;
    printf("Informe o fatorial desejado: ");
    scanf("%ld", &n);
    for(int i=n; i>0; i--){
        fat *= i;
    }
    printf("\n\n%ld! = %ld\n", n, fat);
    return 0;
}