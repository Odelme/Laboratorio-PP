#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int num, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resto = num%2;

    if (resto == 0){
        printf("O numero digitado eh par.\n");
    }

    else{
        printf("O numero eh impar.\n", num);
    }

    return 0;
}
