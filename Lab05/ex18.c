#include <stdio.h>

int expo(num, exp)
{
    int i, a;

    a = num;

    for(i = 1; i <= exp; i++)
        num = num * a;

    return num;
}

void main()
{
    int num, e;

    printf("Digite o numero da base: ");
    scanf("%d", &num);

    printf("Digite o numero do expoente: ");
    scanf("%d", &e);

    printf("O resultado eh %d", expo(num, e));
}
