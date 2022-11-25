#include <stdio.h>

int data(int dia, int mes, int ano)
{
    switch (mes)
    {
    case 1:
        printf("%d de Janeiro de %d\n", dia, ano);
        break;
    case 2:
        printf("%d de Fevereiro de %d\n", dia, ano);
        break;

    case 3:
        printf("%d de Marco de %d\n", dia, ano);
        break;

    case 4:
        printf("%d de Abril de %d\n", dia, ano);
        break;

    case 5:
        printf("%d de Maio de %d\n", dia, ano);
        break;


    case 6:
        printf("%d de Junho de %d\n", dia, ano);
        break;

    case 7:
        printf("%d de Julho de %d\n", dia, ano);
        break;

    case 8:
        printf("%d de Agosto de %d\n", dia, ano);
        break;

    case 9:
        printf("%d de Setembro de %d\n", dia, ano);
        break;

    case 10:
        printf("%d de Outubro de %d\n", dia, ano);
        break;

    case 11:
        printf("%d de Novembro de %d\n", dia, ano);
        break;

    case 12:
        printf("%d de Dezembro de %d\n", dia, ano);
        break;

    default:
        printf("ERRO!!, algo foi digitado errado");
        break;
    }
}
int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    data(dia, mes, ano);
}
