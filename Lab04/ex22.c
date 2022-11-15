#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2;
    int produto, inverso = 0, digitos = 0;
    int a, b;
    int palindromo = 0, d1, d2;


    for (num1 = 999; num1 >= 100; num1--) {
        for (num2 = num1; num2 >= 100; num2--) {
            produto = num1 * num2;

            if (produto > palindromo) {

                a = produto;
                while (a != 0) {
                    digitos++;
                    a /= 10;
                }

                a = produto;
                inverso = 0;

                while(a != 0) {
                    b = a % 10;
                    inverso += b * pow(10, digitos - 1);
                    a /= 10;
                    digitos--;
                }

                if (produto == inverso) {
                    palindromo = inverso;
                    d1 = num1;
                    d2 = num2;
                }
            }
        }
    }

    printf("O maior palindromo feito a partir do produto de dois numeros de tres digitos eh %d x %d = %d\n", d1, d2, palindromo);

    return 0;
}
