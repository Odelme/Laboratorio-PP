#include <stdio.h>
#include <stdlib.h>
int main()
{
float temc, temk;
printf("Digite a temperatura: \n");
scanf("%f",&temc);
temk = temc+273.15;
printf("A temperatura convertida em Kelvin eh: %f\n", temk);
return 0;
}
