#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int num, num1, num2,num3;
        printf("Digite um numero inteiro positivo de tres digitos entre 100 a 999: ");
        scanf("%d", &num);

        num1= num%10;
        num=num/10;
        num2=num%10;
        num=num/10;
        num3= num%10;

        printf ("\nEsse numero invertido e igual a: %d%d%d", num1, num2, num3);

    return 0;

}
