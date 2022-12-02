#include <stdio.h>

int main ()
{
    int A[6];

    for (int i = 0; i < 6; i++){
        printf("Valor %d: ", i);
        scanf("%d", &A[i]);
    }

    for (int j= 5; j  >= 0; j--){
         printf("[%d] ", A[j]);
    }

    return 0;
}
