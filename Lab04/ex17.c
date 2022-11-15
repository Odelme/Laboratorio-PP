#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chico = 1.5;
    float ze = 1.1;
    int ano = 0;

    while (chico >= ze) {

        chico += 0.02;
        ze += 0.03;
        ano += 1;

    }

    printf("Sao necessarios %d anos\n", ano);

    return 0;

}
