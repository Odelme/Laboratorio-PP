#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i ;
    float num;

    do {
        printf("[Digite um valor negativo ou igual a 0 para finalizar o programa]\n");
        printf("Digite um numero: ");
        scanf("%f", &num);

        if (num > 0) {

            printf("O quadrado desse numero eh %.2lf\n", (num * num));
            printf("O cubo desse numero eh %.2lf\n", pow(num, 3));
            printf("A raiz quadrada desse numero eh %.2lf\n\n", sqrt(num));
        }

    } while (num > 0);

    printf("\nPrograma finalizado");

    return 0;

}
