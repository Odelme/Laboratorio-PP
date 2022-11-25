#include <stdio.h>
#include <math.h>

int conversao(int comH, int comM, int comS)
{
    int resultado = 0;

    resultado = comH * 3600;
    resultado = resultado + (comM * 60);
    resultado = resultado + comS;

    return resultado;
}


int main()
{
    int horas, minutos, segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    printf("A conversao dos dados eh %ds", conversao(horas, minutos, segundos));

    return 0;
}
