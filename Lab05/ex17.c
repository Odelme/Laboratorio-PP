#include <stdio.h>

int soma(int a, int b)
{
    int soma = 0;

    for (int i = a + 1; i < b; i++) {
        soma += i;
    }

    return soma;

}

void main()
{
    int n1, n2;

    printf("Digite o valor inicial: ");
    scanf("%d", &n1);

    printf("Digite o valor final: ");
    scanf("%d", &n2);

    printf("A soma dos valores eh %d", soma(n1, n2));

}
