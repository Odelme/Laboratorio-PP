#include <stdio.h>
#include <stdlib.h>

int main() {
        int num, num1, num2, num3, num4;
        printf("Digite um numero inteiro de 4 digitos entre 1000 a 9999:\n");
        scanf("%d", &num);

        num1= num%10;
        num2= (num%100)/10;
        num3= (num%1000)/100;
        num4= (num%10000)/1000;

        printf("\n %d", num1);
        printf("\n %d", num2);
        printf("\n %d", num3);
        printf("\n %d", num4);
    return 0;
}
