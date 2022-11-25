#include <stdio.h>

void linhas(int num)
{
    int count;

    for (count = 1; count <= num; count++)
        printf("=");
}

void main()
{
    int num;

    printf("Quantos '=' deseja que apareca? ");
    scanf("%d", &num);

    linhas(num);
}
