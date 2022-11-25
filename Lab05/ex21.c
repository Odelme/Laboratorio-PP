#include <stdio.h>

int piramide(int linhas)
{
    int i, simbulo;

    for (i = 1; i <= linhas; i++)
    {
        for (simbulo = 1; simbulo <= i; simbulo++)
        {
            printf("!");
        }
        printf("\n");
    }
}

void main()
{
    int linhas;

    printf("Digite o numero de linhas que deseja que a piramide tenha: ");
    scanf("%d", &linhas);

    piramide(linhas);
}
