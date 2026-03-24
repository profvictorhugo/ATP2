#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

int main(){
    double raio, area, perimetro;
    printf("Bem-vindo ao Area & Perimeter Calculator Plus\n\n");
    printf("Informe o raio da circunferencia em cm: ");
    scanf("%lf", &raio);
    area = PI * pow(raio, 2);
    perimetro = 2 * PI * raio;

    printf("O circulo de raio %.2lf cm possui: \n", raio);
    printf("\t - Area = %.2lf cm ^2\n", area);
    printf("\t - Perimetro = %.2lf cm\n", perimetro);

}