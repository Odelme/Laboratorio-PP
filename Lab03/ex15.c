#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf ("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch (valor)
    {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terca-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
        default:
            printf("Tente novamente!! NUMERO INVALIDO");
            break;
    }
    return 0;

}
