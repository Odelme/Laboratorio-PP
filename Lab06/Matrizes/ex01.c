#include <stdio.h>

int main()
{
    int matriz[4][4];
    int maior = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor da matriz de posicao [%d] x [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > 10)
                maior += 1;

        }
    }

    printf("A quantidade de valores maiores que dez eh de: %d", maior);

    return 0;
}
