#include <stdio.h>

void carro(int km, int litros)
{
    int consumo;

    consumo = km / litros;

    if (consumo > 14)
        printf("Super economico!");

    else if (consumo >= 8)
        printf("Economico!");

    else if (consumo > 0)
        printf("Venda o carro!");
}


void main()
{
    int km, litros;

    printf("Digite a quantidade de Km rodados: ");
    scanf("%d", &km);

    printf("Digite o consumo de gasolina: ");
    scanf("%d", &litros);

    carro(km, litros);
}
