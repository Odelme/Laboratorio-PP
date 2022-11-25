#include <stdio.h>

int conta(int num)
{
    int soma = 0;

    while (num > 0)
    {
        soma = soma + (num % 10);
        num = num / 10;
    }

    return soma;
}

int main()
{

    int num, resultado;

    printf("Digite o numero para a soma dos algarismos: ");
    scanf("%d", &num);

    resultado = conta(num);

    printf("A soma eh %d", resultado);

    return 0;
}
