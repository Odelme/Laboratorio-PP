#include <stdio.h>

int triangulo(int linha)
{
    int i = 0, simbulo, total_lim, lim = 1;

    total_lim = 2 * linha - 1;

    while (lim <= total_lim)
    {
        i = lim <= linha ? i + 1: i - 1;

        for (simbulo = 1; simbulo <= i; simbulo++)
        {
            printf("*");
        }

        printf("\n");
        lim++;
    }
}

int main()
{
    int altura;

    printf("Digite a altura do triangulo lateral: ");
    scanf("%d", &altura);

    triangulo(altura);

    return 0;
}
