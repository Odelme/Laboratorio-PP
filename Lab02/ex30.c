#include <stdio.h>
#include <stdlib.h>

int main(){
    float real;

    printf("Digite o valor em real:");
    scanf("%f", &real);
    printf("Esse valor em dolar eh $%.2f", real*5.28);
}
