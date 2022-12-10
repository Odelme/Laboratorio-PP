#include <stdio.h>
#include <string.h>

int main()
{
    char S[20];
    int valor[2][2];
    int i, j;

    printf("Digite uma palavra: ");
    gets(S);
    fflush(stdin);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Digite o valor da matriz de posicao [%d][%d] ", i, j);
            scanf("%d", &valor[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 0)
                printf("%s ", S);
            printf("[%2d] ", valor[i][j]);

        }
    printf("\n");
    }

    return 0;
}
