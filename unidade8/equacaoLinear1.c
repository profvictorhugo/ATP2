#include <stdio.h>

typedef struct {
    float a;
    float b;
    float c;
    float d;
} Equacao;

int main() {
    Equacao eq = {2, 3, -1, 10};

    printf("%.1fx + %.1fy + %.1fz = %.1f\n",
           eq.a, eq.b, eq.c, eq.d);

    return 0;
}