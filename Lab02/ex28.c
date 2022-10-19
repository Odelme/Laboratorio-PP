#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float num1, num2, num3, qd1, qd2, qd3;
printf("Digite 3 valores\n");
scanf(" %f %f %f", &num1, &num2, &num3);
qd1 = pow(num1,2);
qd2 = pow(num2,2);
qd3 = pow(num3,2);
printf("A soma dos quadrados eh: %f\n", (qd1+qd2+qd3));
return 0;
}
