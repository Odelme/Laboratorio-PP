#include <stdio.h>

void calculadora(int num1, int num2)
{
    char operando;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

        printf("Digite qual operacao deseja realizar:\n[+]\n[-]\n[*]\n[/]\n");
        fflush(stdin);
        scanf("%c", &operando);

    switch(operando) {
        case '+':
            printf("%d + %d = %d", num1, num2, (num1 + num2));
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, (num1 - num2));
            break;
        case '*':
            printf("%d X %d = [%d]", num1, num2, (num1 * num2));
            break;
        case '/':
            printf("%d / %d = %d", num1, num2, (num1 / num2));
            break;
        default:
            printf("Operacao invalida: ");
            break;

    }
}

void main()
{
    int n1, n2;

    calculadora(n1, n2);

}
