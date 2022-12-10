#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matriz[4][4];

    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = (rand() % 20) + 1;

        }
    }

    printf("\n    MATRIZ ORIGINAL\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf(" [%2d] ", matriz[i][j]);
        }

    printf("\n");

    }

    printf("\n  MATRIZ TRANSFORMADA\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if (i == j || i > j) {
                printf(" [%2d] ", matriz[i][j]);
            }
            else {
                matriz[i][j] = 0;
                printf(" [%2d] ", matriz[i][j]);
            }
        }

    printf("\n");

    }
    return 0;
}
