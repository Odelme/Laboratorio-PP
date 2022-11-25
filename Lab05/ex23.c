#include <stdio.h>

void arvore(int simbulo)
{
  int i, a,b;

    for (i = 0; i < simbulo; i++) {
        for (a = 0; a < simbulo - i - 1; a++) {
            printf(" ");
        }
        for (b = 0; b < 2 * i + 1; b++) {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int altura;

    printf("Qual o tamanho do triangulo arvore? ");
    scanf("%d", &altura);

    arvore(altura);

    return 0;
}
