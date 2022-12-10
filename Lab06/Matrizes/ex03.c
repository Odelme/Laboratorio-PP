#include <stdio.h>

int main()
{
    int matriz[4][4];

    int linha_maior = 0;
    int coluna_maior = 0;
    int valor_maior = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite a matriz de posicao [%d] x [%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                linha_maior = i;
                coluna_maior = j;
                valor_maior = matriz[i][j];

            }
            else {
                if (matriz[i][j] > valor_maior) {
                    posicao_linha_maior_valor = i;
                    coluna_maior = j;
                    valor_maior = matriz[i][j];

                }
            }
        }
    }

    printf("\nO maior valor da matriz eh de %d\n", valor_maior);

    return 0;

}
