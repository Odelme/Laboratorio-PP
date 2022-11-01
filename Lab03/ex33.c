#include <stdio.h>
#include <stdlib.h>

int main()
{
    float velho, novo;

    printf("Digite o valor antigo: R$");
    scanf("%f", &velho);

    if (velho < 50) {
        novo = velho * 1.05;
        printf("O novo preco sera de R$%.2f\n", novo);

        if (novo < 80) {
            printf("Barato");

        } else if (novo >= 80 && novo <= 120) {
            printf("Normal");

        } else if (novo >= 120 && novo <= 200) {
            printf("Caro");

        } else if (novo > 120) {
            printf("Muito caro");
        }

    } else if (velho >= 50 && velho <= 100) {
        novo = velho * 1.1;
        printf("O novo preco sera de R$%.2f\n", novo);

        if (novo < 80) {
            printf("Barato");

        } else if (novo >= 80 && novo <= 120) {
            printf("Normal");

        } else if (novo >= 120 && novo <= 200) {
            printf("Caro");

        } else if (novo > 120) {
            printf("Muito caro");
        }

    } else {
        novo = velho * 1.15;
        printf("O novo preco sera de R$%.2f\n", novo);

        if (novo < 80) {
            printf("Barato");

        } else if (novo >= 80 && novo <= 120) {
            printf("Normal");

        } else if (novo >= 120 && novo <= 200) {
            printf("Caro");

        } else if (novo > 120) {
            printf("Muito caro");
        }

    }

    return 0;

}
