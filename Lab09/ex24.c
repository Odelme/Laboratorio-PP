#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void extremo(int *arra1, int *min, int *max, int tam)
{
    *min = *max = *arra1;
    for (int count = 0; count < tam; count++)
    {
        if (*min > *(arra1 + count))
        {
            *min = *(arra1 + count);
        }
        if (*max < *(arra1 + count))
        {
            *max = *(arra1 + count);
        }
    }
}

void main()
{
    int *p, tam, min, max;

    printf("Digite o tamanho desejado do vetor: ");
    scanf("%d", &tam);

    p = calloc(tam, sizeof(int));

    for (int count = 0; count < tam; count++)
    {
        *(p + count) = rand() % 91 + 11;
    }

    extremo(p, &min, &max, tam);

    printf("O maximo eh: %d\nO minimo eh: %d", max, min);
}
