
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int a, b, c;
    float delta, x1, x2;

    printf("\n****** Cálculo de Bhaskara *****\n\n");
    printf("Digite o valor para A: ");
    scanf("%d", &a);
    printf("Digite o valor para B: ");
    scanf("%d", &b);
    printf("Digite o valor para C: ");
    scanf("%d", &c);

    if (a == 0) {
        printf("\nNão é uma equação do 2º grau.\n");
    } else {
        delta = pow(b,2) - 4*a*c;
        printf("\nDelta: %.2f\n", delta);

        if (delta < 0) {
            printf("ATENÇÃO!!! Não possui raiz real.\n");
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("x1: %.2f\nx2: %.2f\n", x1, x2);
        }
    }

    return 0;
}
