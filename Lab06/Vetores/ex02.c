#include <stdio.h>

int main ()
{
    int A[8];
    int soma,x,y;

    for (int i = 0; i < 8; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite a posicao do primeiro valor que deseja somar: ");
    scanf("%d", &x);
    printf("Digite a posicao do segundo valor que deseja somar: ");
    scanf("%d", &y);

    soma = A[x] + A[y];

    printf ("\nA posicao %d corresponde ao valor %d, e a posicao %d corresponde ao valor %d", x, A[x], y, A[y]);
    printf("\nA soma entre eles eh %d\n", soma);
    return 0;
}
