#include <stdio.h>
#include <math.h>

void hipotenusa(int a, int b)
{
    float hipotenusa;

    hipotenusa = sqrt((a * a) + (b * b));

    printf("%.3f", hipotenusa);

}

void main()
{
    float cateto1, cateto2;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa(cateto1, cateto2);

}
