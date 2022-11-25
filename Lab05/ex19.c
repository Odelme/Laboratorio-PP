#include <stdio.h>

int fatorial(num)
{
    int i, resultado = 1;

    for (i = 1; i <= num; i++)
        resultado = resultado * i;

    return resultado;
}

void main()
{
    int num;

    printf("Digite o fatorial: ");
    scanf("%d", &num);

    printf("O resultado eh %d", fatorial(num));
}
