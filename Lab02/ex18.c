#include <stdio.h>
#include <stdlib.h>
int main()
{
float vol, mc;
printf("Digite a medida a ser convertido: \n");
scanf("%f",&mc);
vol = 1000*mc;
printf("A convercao eh: %f\n", vol);
return 0;
}
