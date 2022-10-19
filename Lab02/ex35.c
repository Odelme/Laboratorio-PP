#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float cat1, cat2, hip;
    printf("Insira o valor dos catetos:\n");
    scanf("%f %f", &cat1, &cat2);
    hip = sqrt((cat1* cat1) + (cat2* cat2));
    printf("A hipotenusa dos valores eh %.2f", hip);
    return 0;
}
