#include <stdio.h>
#include <stdlib.h>
int main()
{
float km, ms;
printf("Digite a distancia que deseja converter: \n");
scanf("%f",&km);
ms = km/3.6;
printf("A distancia convertida eh: %f\n", ms);
return 0;
}
