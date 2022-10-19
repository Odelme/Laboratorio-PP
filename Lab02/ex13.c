#include <stdio.h>
#include <stdlib.h>
int main()
{
float mm, km;
printf("Digite a distancia que deseja converter: \n");
scanf("%f",&km);
mm = km/1.61;
printf("A distancia convertida eh: %f\n", mm);
return 0;
}
