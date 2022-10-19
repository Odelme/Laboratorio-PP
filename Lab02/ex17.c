#include <stdio.h>
#include <stdlib.h>
int main()
{
float pol, cm;
printf("Digite a medida a ser convertido: \n");
scanf("%f",&cm);
pol = cm/2.54;
printf("A convercao eh: %f\n", pol);
return 0;
}
