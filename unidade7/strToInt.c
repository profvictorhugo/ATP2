#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//convertendo uma string em int
//ex: 10-20 para a=10 e b=20
//usando a função atoi()
//da biblioteca stdlib.h
//e funções de string

int main(){
    char str_num[10] = "10";
    int a = atoi(str_num);
    strcpy(str_num, "10-20");
    int b;
    char *token = strtok(str_num, "-");
    a = atoi(token);
    token = strtok(NULL, "-");
    b = atoi(token);
    return 0;
}