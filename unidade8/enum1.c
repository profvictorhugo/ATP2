#include <stdio.h>

//começa em zero, mas estamos forçando para iniciar em um
enum Dia {
    DOMINGO=1,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

int main() {
    enum Dia hoje;

    hoje = QUARTA;

    printf("Valor de QUARTA: %d\n", hoje);

    return 0;
}