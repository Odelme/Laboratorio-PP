#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor,horas,pagar,adc;

    printf("Qual o valor da hora de trabalho?\n");
    scanf("%f", &valor);
    printf("Quantas horas de trabaho?\n");
    scanf("%f", &horas);
    pagar = valor*horas;
    adc = pagar*0.10;
    printf("O valor a ser pago ao funcionario eh R$%.2f", pagar+adc);
return 0;
}
