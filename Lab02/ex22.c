#include <stdio.h>
#include <stdlib.h>
int main()
{
float jardas, metro;
printf("Digite a medida a ser convertido: \n");
scanf("%f",&jardas);
metro = 0.91*jardas;
printf("A convercao eh: %f\n", metro);
return 0;
}
