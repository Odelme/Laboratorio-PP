#include <stdio.h>
#include <stdlib.h>
int main()
{
float grau, r, pi;
printf("Digite o grau a ser convertido: \n");
scanf("%f",&r);
pi=3.141592;
grau = r*180/pi;
printf("A distancia convertida eh: %f\n", grau);
return 0;
}
