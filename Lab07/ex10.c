#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30];
    float valor;
    float desconto, avista;

    printf("Digite o nome da mercadoria: ");
    gets(nome);
    fflush(stdin);

    printf("Digite o valor da mercadoria: R$");
    scanf("%f", &valor);

    desconto = valor * 0.1;
    avista = valor * 0.9;

    printf("\nO nome da mercadoria eh %s\n", nome);
    printf("O valor total do produto eh de R$%.2f\n", valor);
    printf("O valor do desconto eh¨de R$%.2f \n", desconto);
    printf("O valor a vista a ser pago eh de R$%.2f\n", avista);

    return 0;
}
