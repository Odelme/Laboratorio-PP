#include <stdio.h>

int negativo(x)
{
    if (x > 0)
        return 1;

    else if (x < 0)
        return -1;

    else
        return 0;
}

int main()
{
    int num, teste;

    printf("Digite um numero para saber se ele negativo, positivo ou igual a 0: ");
    scanf("%d", &num);

    teste = negativo(num);

    if (teste == 1)
        printf("1\nO numero eh positivo!\n");
    else if (teste == -1)
        printf("-1\nO numero eh negativo!\n");
    else if (teste == 0)
        printf("0\nO numero eh igual a 0\n");
}
