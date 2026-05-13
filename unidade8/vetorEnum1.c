#include <stdio.h>

typedef enum {
    MACA,
    BANANA,
    LARANJA,
    TOTAL_FRUTAS
} Fruta;

int main() {
    int estoque[TOTAL_FRUTAS];

    estoque[MACA] = 10;
    estoque[BANANA] = 5;
    estoque[LARANJA] = 8;

    printf("Maçãs: %d\n", estoque[MACA]);
    printf("Bananas: %d\n", estoque[BANANA]);
    printf("Laranjas: %d\n", estoque[LARANJA]);
    //Usando índices tradicionais
    printf("--------------------\n");
    printf("Maçãs: %d\n", estoque[0]);
    printf("Bananas: %d\n", estoque[1]);
    printf("Laranjas: %d\n", estoque[2]);

    return 0;
}