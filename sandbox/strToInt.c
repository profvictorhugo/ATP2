#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numero;
    char str_num[6] = "123";
    //conversão usando biblioteca stdlib 
    numero = atoi(str_num);
    //usando biblioteca string
    strcpy(str_num, "10-20");
    char *token = strtok(str_num, "-");
    int a = atoi(token);
    token = strtok(NULL, "-");
    int b = atoi(token);

    //fazendo na mão sem strtok
    int nA, nB;
    char snA[3];
    char snB[3];
    int j = 0;
    int preencheu_nA = 0;
    for(int i=0; i<6; i++){
        char c = str_num[i];
        if(c != '\0' && c != '-'){
            if (!preencheu_nA){
                snA[j++] = c;
            }else{
                snB[j++] = c;
            }
        }else{
            if(!preencheu_nA){
                preencheu_nA = 1;
                snA[j] = '\0';
                nA = atoi(snA);
                j = 0;
            }else{
                snB[j] = '\0';
                nB = atoi(snB);
            }
        }
    }

    return 0;
}