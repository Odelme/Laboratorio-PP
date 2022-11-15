#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano;
    float salario = 2000, aumento;

    aumento = salario * 0.015;

    for (ano = 1996; ano <= 2022; ano++) {
        salario += aumento;
        aumento *= 2;

    }

    printf("Salario em 2022 eh R$%.2f\n", salario);

    return 0;

}
