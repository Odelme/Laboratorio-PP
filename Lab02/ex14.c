#include <stdio.h>
#include <stdlib.h>
int main()
{
float grau, r, pi;
printf("Digite o grau a ser convertido: \n");
scanf("%f",&grau);
pi=3.141592;
r = grau*pi/180;
printf("A distancia convertida eh: %f\n", r);
return 0;
}
