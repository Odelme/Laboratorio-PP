#include <stdio.h>

int maior(int num1, int num2)
{
    if (num1 > num2)
        printf("%d > %d", num1, num2);

    else if (num1 < num2)
         printf("%d > %d", num2, num1);

    else if (num1 == num2)
        printf("%d = %d", num1, num2);
}


int main()
{
    int num1, num2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    maior(num1, num2);

    return 0;
}
