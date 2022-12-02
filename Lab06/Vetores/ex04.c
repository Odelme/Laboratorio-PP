#include <stdio.h>

int main()
{
    int vetor[5];
    int p_maior = 0, p_menor = 0;
    int v_maior = 0, v_menor = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);

        if (i == 0) {
            v_maior = vetor[i];
            v_menor = vetor[i];
            p_maior = 0;
            p_menor = 0;

        }
        else if (vetor[i] > v_maior) {
                p_maior = i;

        } else if (vetor[i] < v_menor) {
                p_menor = i;

            }
        }

    printf("O maior valor esta na posicao [%d]\n", p_maior);
    printf("O menor valor esta na posicao [%d]\n", p_menor);

    return 0;
}
