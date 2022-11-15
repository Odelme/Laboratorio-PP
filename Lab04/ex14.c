#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int d1, d2, i=1, escolha;

    printf("Quantas vezes deseja jogar o dado? ");
    scanf("%d", &escolha);


    while (i <= escolha) {
        d1 = (rand() % 6) + 1;
        d2 = (rand() % 6) + 1;

        printf("%do jogada: \n",i);
        printf("O primeiro dado caiu na fase %d e o segundo dado na fase %d\n", d1, d2);
        if (d1>d2)
            {
                printf("Fase do primeiro dado maior que a fase segundo dado\n");
                printf("\n");
                i++;
            }
        else if (d2>d1) {
            printf("Fase do segundo dado maior que a fase do primeiro dado\n");
            printf("\n");
            i++;
        }
        else if (d1 == d2) {
            printf("As fases dos dois dados sao iguais\n");
            printf("\n");
            i++;
        }
        }
        printf("Fim!");
    return 0;
}
