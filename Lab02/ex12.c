#include <stdio.h>
#include <stdlib.h>
int main()
{
float mm, km;
printf("Digite a distancia que deseja converter: \n");
scanf("%f",&mm);
km = 1.61*mm;
printf("A distancia convertida eh: %f\n", km);
return 0;
}
