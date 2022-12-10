#include <stdio.h>
#include <string.h>

int main()
{
    char stg [5][200];
    int vet[5], i, modelo = 0, alt = 0, x;

    for (i = 0; i < 5; i++)
    {
        printf("Digite modelos de carro: ");
        fgets(stg[i], 200, stdin);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nCom 1 litro de combustivel, quantos quilometros percorre o: %s", stg[i]);
        fflush(stdin);
        scanf("%d", &vet[i]);
    }


    for (i = 0; i < 5; i++)
    {
        if (vet[i] > modelo)
        {
            modelo = vet[i];
            alt = i;
        }
    }

    printf("\nA maior autonomia com %d km/l eh do: %s\n", vet[alt], stg[alt]);

    for (i = 0; i < 5; i++)
    {
        x = 1000 / vet[i];
        printf("\nEm um percurso de 1000km o %s gasta %d L de combusivel.\n", stg[i], x);
    }

    return 0;
}
