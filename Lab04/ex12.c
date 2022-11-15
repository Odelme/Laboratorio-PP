#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num;
    int div = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--) {
        if (num % i == 0) {
            printf("%d, ", i);
            div += i;
        }
    }

    printf(" sao seus divisores\n");
    printf("A soma dos divisores de %d eh %d", num, (div - num));

    return 0;

}
