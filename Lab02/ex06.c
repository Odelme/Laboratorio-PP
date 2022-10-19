#include <stdio.h>
#include <stdlib.h>
int main()
{
float temc, temf;
printf("Digite a temperatura: \n");
scanf("%f",&temc);
temf = temc*(9.0/5.0)+32.0;
printf("A temperatura convertida em Fahrenheit eh: %f\n", temf);
return 0;
}
