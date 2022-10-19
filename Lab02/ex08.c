#include <stdio.h>
#include <stdlib.h>
int main()
{
float temc, temk;
printf("Digite a temperatura: \n");
scanf("%f",&temk);
temc = temk-273.15;
printf("A temperatura convertida em Celsius eh: %f\n", temc);
return 0;
}
